#include <unistd.h>

/**
 * main - prints some texts to the sdt error output
 *
 * Return:0
 */

int main(void)
{
	char text[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, text, 59);

	return (0);
}
