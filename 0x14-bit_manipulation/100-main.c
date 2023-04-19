#include <stdio.h>
#include "main.h"

int main(void)
{
	int n;

	n = get_endianness();
	if (n != 0)
		printf("Little Mrs Sunshine\n");
	else
		printf("BIG Endian\n");

	return (0);
}
