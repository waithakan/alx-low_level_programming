#!/bin/bash
gcc -Wall -Wextra -Werror -pendantic -c -fPIC *.c
gcc *.o -shared -o liball.so
