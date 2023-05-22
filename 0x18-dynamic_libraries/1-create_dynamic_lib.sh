#!/bin/bash
c_document=$(find . -maxdepth 1 -type f -name "*.c")
for document in $c_document; do
	gcc -c -Wall -Werror -fpic "$document" -o "${document%.c}.o"
done

gcc -shared -o liball.so *.o

rm *.o
