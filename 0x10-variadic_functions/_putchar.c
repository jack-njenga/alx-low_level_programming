#include <unistd.h>
#include "variadic_functions.h"
/**
 * _putchar - Prints a character
 * @c: character to print
 * Return: c
 */
char _putchar(char c)
{
	return (write(1, &c, 1));
}
