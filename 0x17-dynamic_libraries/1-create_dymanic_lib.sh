#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -g -fPIC *.c -shared -o liball.so
