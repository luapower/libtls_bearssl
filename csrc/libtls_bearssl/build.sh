${X}gcc -c *.c compat/*.c -Wall -Wpedantic -D_POSIX_SOURCE -I. -I../bearssl -O2 -fPIC $C
${X}gcc *.o -shared -o ../../bin/$P/$D -L../../bin/$P -lbearssl $L
rm -f      ../../bin/$P/$A
${X}ar rcs ../../bin/$P/$A *.o
rm *.o
