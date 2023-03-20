#include <stdio.h>
/**
 * main - prints the name of the file it
 * was compiled from
 * argc: argument counter
 * argv: argument vector
 * Return:0
 */
int main(void)
{
	printf(__FILE__);
	return (0);
}
