#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *c;
    int *i;
    float *f;
    double *d;

    c = malloc_checked(sizeof(char) * 1024);
    printf("for char c: %p\n", (void *)c);
    i = malloc_checked(sizeof(int) * 402);
    printf("for int i: %p\n", (void *)i);
    f = malloc_checked(sizeof(float) * 1000000000);
    printf("for float f: %p\n", (void *)f);
    d = malloc_checked(INT_MAX);
    printf("for double d: %p\n", (void *)d);
    free(c);
    free(i);
    free(f);
    free(d);
    return (0);
}
