#/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar rcs liball.a *.o
