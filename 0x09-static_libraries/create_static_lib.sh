#!/bin/bash
<<<<<<< HEAD
gcc -Wall -Werror -Wextra -pedantic -std=gnu8 -c *.c
=======
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
>>>>>>> 35dbbda64439e5e067f6463eb981d19f9b333468
ar rcs liball.a *.o
