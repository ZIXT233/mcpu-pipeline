
cd sample_codes
/opt/homebrew/opt/llvm/bin/clang -target mipsel  -O2  -mips2 -fverbose-asm -fomit-frame-pointer -g0 -c ./init.s
FNAME=$(basename $1 .c)
mkdir $FNAME
cd $FNAME
/opt/homebrew/opt/llvm/bin/clang -target mipsel  -O2  -mips2 -fverbose-asm -fomit-frame-pointer -g0 -S ../$1
/opt/homebrew/opt/llvm/bin/clang -target mipsel  -O2  -mips2 -fverbose-asm -fomit-frame-pointer -g0 -c ./${FNAME}.s
/opt/homebrew/opt/llvm/bin/ld.lld -T ../ld.ld  ${FNAME}.o ../init.o -o tmp
/opt/homebrew/opt/llvm/bin/llvm-objcopy -j ".text" -j ".data" -O binary tmp ${FNAME}.bin
/opt/homebrew/opt/llvm/bin/llvm-objcopy -j ".text" -j ".data" tmp dtmp
/opt/homebrew/opt/llvm/bin/llvm-objdump -D dtmp > out.s
xxd -e -c 4  ${FNAME}.bin | cut -f2 -d' ' > out.txt   
cd ../..