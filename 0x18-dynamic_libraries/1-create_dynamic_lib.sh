#!/bin/bash

#use gcc -c (not to link) -fPIC(positional independent code for share libraries) 
gcc -c -fPIC *.c

# include shared flag for shared library
gcc -shared -o liball.so *.o

#append directory to path
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
