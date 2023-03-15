#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar -rcs liball.a *.o 
ar -t liball.a | sort -k2
ranlib liball.a
