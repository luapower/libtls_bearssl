${X}gcc -c *.c compat/*.c -I. -I../bearssl -O2 -fPIC $C \
	-Wall -Wpedantic -D_FORTIFY_SOURCE=1 -D_POSIX_SOURCE
${X}gcc *.o -g -shared -o ../../bin/$P/$D -L../../bin/$P -lbearssl $L
rm -f      ../../bin/$P/$A
${X}ar rcs ../../bin/$P/$A *.o
rm *.o
