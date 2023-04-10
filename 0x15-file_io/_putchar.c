#include "main.h"
/**
 * _putchar - writes a charscter @c to the stdout
 * @c: the character to write
 * Return: char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
