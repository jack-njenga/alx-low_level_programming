#include "main.h"
#include <stdio.h>

int main(void)
{
	char str[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
	char *p;

	p = rot13(str);
	printf("%s", p);
	printf("------------------------------------\n");
	printf("%s", str);
	printf("------------------------------------\n");
	p = rot13(str);
	printf("%s", p);
	printf("------------------------------------\n");
	return (0);
}
