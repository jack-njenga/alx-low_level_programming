#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* haeder files */
#include <stdio.h>
#include <stdlib.h>

/* prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int *divide_array(int *array, int sz, int i);

#endif
