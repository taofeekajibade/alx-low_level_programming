#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu8 -c *.c
ar rcs liball.a *.o
