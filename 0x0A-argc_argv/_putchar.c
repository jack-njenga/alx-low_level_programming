#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character to the stdout
 * @s: character to write
 * Return: s
 */
char _putchar(char *s)
{
	return (write(1, &s, 1);
}
