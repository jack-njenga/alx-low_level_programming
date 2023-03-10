#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: ignored argument counter
 * @argv: arguments vector passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n;

	/*printf("%s %s\n", argv[0], argv[1]);*/
	for (n = 0; n != argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
