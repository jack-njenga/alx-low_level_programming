#include <unistd.h>
/**
 * _putchar - prints out a char
 * @c: character to print
 * Return: char
 */
char _putchar(char *c)
{
	return (write(1, &c, 1);
}
