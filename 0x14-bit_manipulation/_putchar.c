#include "main.h"
/**
 * _putchar - writes a character to the stdout
 * @c: character to write
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
