#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c main.h
ar -rc liball.a *.o
