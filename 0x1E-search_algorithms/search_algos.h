#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* haeder files */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *arr, int start, int end);
void _puts(char *str);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif
