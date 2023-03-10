#include "main.h"
#include <stdio.h>
/**
 * main - entry point which returns number of argc passed
 * @argc:argument counter
 * @argv: argument vector
 * Return:0
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
