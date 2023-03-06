#include "main.h"
#include <unistd.h>
/**
 * _putchar - write character to the stdout
 * @c: character to write
 * Return: 1(success) else (on error)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
