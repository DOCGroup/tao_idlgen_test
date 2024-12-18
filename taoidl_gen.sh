export TAO_IDLGEN_ROOT=`pwd`
pushd $TAO_ROOT
declare -a tests=("tests/AMI"
                  "tests/AMH_Exceptions"
                  "tests/Hello"
                  "tests/IDL_Test"
                  "tests/Strategies"
                  )
for i in "${tests[@]}"
do
  export TEST=$i
  pushd $TEST
  $ACE_ROOT/bin/mwc.pl -type gnuace -workers 8
  make realclean && make -j 8
  mkdir -p $TAO_IDLGEN_ROOT/$TEST
  find . -type f \( -name '*A.h' -o -name '*A.cpp' -o -name '*S.h' -o -name '*S.cpp' -o -name '*SP.h' -o -name '*SP.cpp' -o -name '*CP.h' -o -name '*C.h' -o -name '*C.cpp' -o -name '*CP.cpp' \)  -exec cp {} $TAO_IDLGEN_ROOT/$TEST \;
 popd
done
popd
