#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character to stdout.
 * @c:value to be wrote
 *
 * Return:1 for success, otherwise 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
