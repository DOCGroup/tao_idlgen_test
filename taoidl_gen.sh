set -e
export TAO_IDLGEN_ROOT=`pwd`
pushd $ACE_ROOT/apps/gperf/src
$ACE_ROOT/bin/mwc.pl -type gnuace -workers 8
make -f GNUmakefile.gperf realclean && make -f GNUmakefile.gperf -j 8
popd
pushd $TAO_ROOT
declare -a tests=("tests/AMI"
                  "tests/AMH_Exceptions"
                  "tests/Hello"
                  "tests/IDL_Test"
                  "tests/Smart_Proxies"
                  "tests/Strategies"
                  )
for i in "${tests[@]}"
do
  export TEST=$i
  pushd $TEST
  $ACE_ROOT/bin/mwc.pl -type gnuace -workers 8 -include "$TAO_ROOT/MPC/config"
  find . -type f -name 'GNUmakefile*' -exec sed -i '/^TAO_IDLFLAGS =/a TAO_IDLFLAGS += -Sg' {} +
  make realclean && make -j 8
  if [ "$TEST" = "tests/IDL_Test" ]; then
    make -C Versioned_Namespace -f GNUmakefile.IDL_Test_Versioned_Namespace_1 \
      TestVersionedNamespaceC.h
    make -C Versioned_Namespace -f GNUmakefile.IDL_Test_Versioned_Namespace_2 \
      TestVersionedNamespace2C.h
  fi
  if [ "$TEST" = "tests/Smart_Proxies" ]; then
    make -f GNUmakefile.Smart_Proxies_Idl
  fi
  mkdir -p $TAO_IDLGEN_ROOT/$TEST
  snapshot_files=()
  declare -A snapshot_basenames=()
  while IFS= read -r -d '' file
  do
    case "$TEST:$file" in
      tests/Hello:./orig/*)
        continue
        ;;
      tests/Smart_Proxies:./*/*)
        case "$file" in
          ./Collocation/*) ;;
          *) continue ;;
        esac
        ;;
    esac

    basename=${file##*/}
    if [[ -n ${snapshot_basenames[$basename]+x} ]]
    then
      echo "Duplicate generated snapshot filename '$basename': ${snapshot_basenames[$basename]} and $file" >&2
      exit 1
    fi
    snapshot_basenames[$basename]=$file
    snapshot_files+=("$file")
  done < <(find . -type f \( -name '*A.h' -o -name '*A.cpp' -o -name '*S.h' -o -name '*S.cpp' -o -name '*SP.h' -o -name '*SP.cpp' -o -name '*CP.h' -o -name '*C.h' -o -name '*C.cpp' -o -name '*CP.cpp' -o -name '*C.inl' \) -print0 | sort -z)

  find $TAO_IDLGEN_ROOT/$TEST -type f \( -name '*A.h' -o -name '*A.cpp' -o -name '*S.h' -o -name '*S.cpp' -o -name '*SP.h' -o -name '*SP.cpp' -o -name '*CP.h' -o -name '*C.h' -o -name '*C.cpp' -o -name '*CP.cpp' -o -name '*C.inl' \) -delete
  for file in "${snapshot_files[@]}"
  do
    cp "$file" "$TAO_IDLGEN_ROOT/$TEST/"
  done
  find $TAO_IDLGEN_ROOT/$TEST -type f -exec sed -i 's/[[:blank:]]*$//' {} +
  find $TAO_IDLGEN_ROOT/$TEST -type f -exec perl -0pi -e 's/\n+\z/\n/' {} +
 popd
done
popd
