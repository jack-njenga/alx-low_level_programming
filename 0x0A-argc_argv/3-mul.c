#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiples two numbers
 * @argc: argument counter
 * @argv: arguments passed in
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int ans;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		ans = (num1 * num2);

		printf("%d\n", ans);
	}
	return (0);
}
