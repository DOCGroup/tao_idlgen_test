export TAO_IDLGEN_ROOT=`pwd`
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
  $ACE_ROOT/bin/mwc.pl -type gnuace -workers 8
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
  find $TAO_IDLGEN_ROOT/$TEST -type f \( -name '*A.h' -o -name '*A.cpp' -o \
    -name '*S.h' -o -name '*S.cpp' -o -name '*SP.h' -o -name '*SP.cpp' -o \
    -name '*CP.h' -o -name '*C.h' -o -name '*C.cpp' -o -name '*CP.cpp' -o \
    -name '*C.inl' \) -delete
  find . -type f \( -name '*A.h' -o -name '*A.cpp' -o -name '*S.h' -o -name '*S.cpp' -o -name '*SP.h' -o -name '*SP.cpp' -o -name '*CP.h' -o -name '*C.h' -o -name '*C.cpp' -o -name '*CP.cpp' -o -name '*C.inl' \)  -exec cp {} $TAO_IDLGEN_ROOT/$TEST \;
  find $TAO_IDLGEN_ROOT/$TEST -type f -exec sed -i 's/[[:blank:]]*$//' {} +
 popd
done
popd
