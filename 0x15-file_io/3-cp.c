#include "main.h"
/**
 * main -  a program that copies the content of a file to another file.
 * @argc: argument counter
 * @argv: argument vector
 * Return: 1 if success else on error
 */
int main(int argc, char *argv[])
{
	int fd_f, fd_t, r, w, c1, c2;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	fd_f = open(argv[1], O_RDONLY);
	r = read(fd_f, buff, 1024);
	if (fd_f == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buff);
		exit(98);

	}
	fd_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	w = write(fd_t, buff, r);
	if (fd_t == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buff);
		exit(99);
	}
	do {
		r = read(fd_f, buff, 1024);
		fd_t = open(argv[2], O_WRONLY, O_APPEND);
	} while (r > 0);
	free(buff);
	c1 = close(fd_f);
	c2 = close(fd_t);
	if (c1 == -1 || c2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (c1 == -1) ? fd_f : fd_t);
	}
	return (0);
}
