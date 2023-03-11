#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to write
 * Return: c
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
