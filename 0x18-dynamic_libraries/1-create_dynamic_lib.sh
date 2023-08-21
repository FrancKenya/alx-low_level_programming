#!/usr/bin/bash

# use gcc -c (to not link) -fPIC(generate positional independent code

gcc -c -fPIC *.c

# use gcc and -shared (indicate it's a dynamic library) to link obkect files

gcc -shared -o liball.so *.o

# Remove .o files

rm *.o
