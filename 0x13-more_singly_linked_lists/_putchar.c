#include "lists.h"
/**
 * _putchar - writes a character @c to the stdout
 * @c: character to write
 * Return: the character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
