#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point
 *
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 if successful, 98, 99, or 100 if an error occurs
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;
    char *op;
    int (*op_func)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        return (98);
    }

    num1 = atoi(argv[1]);
    op = argv[2];
    num2 = atoi(argv[3]);

    op_func = get_op_func(op);

    if (op_func == NULL)
    {
        printf("Error\n");
        return (99);
    }

    if ((*op == '/' || *op == '%') && num2 == 0)
    {
        printf("Error\n");
        return (100);
    }

    result = op_func(num1, num2);

    printf("%d\n", result);

    return (0);
}
