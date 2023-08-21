#!/usr/bin/bash

# use gcc -c (to not link) -fPIC(generate positional independent code

gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.c

# use gcc and -shared (indicate it's a dynamic library) to link obkect files

gcc -shared -o liball.so *.o
# Append directory

export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
