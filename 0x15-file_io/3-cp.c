#include "main.h"
char *create_buffer(char *file);
void close_file(int fd);
/**
 * main -  a program that copies the content of a file to another file.
 * @argc: argument counter
 * @argv: argument vector
 * Return: 1 if success else on error
 */
int main(int argc, char *argv[])
{
	int fd_f, fd_t, r, w;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buffer(argv[2]);
	fd_f = open(argv[1], O_RDONLY);
	r = read(fd_f, buff, 1024);
	fd_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fd_f == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		w = write(fd_t, buff, r);
		if (fd_t == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		r = read(fd_f, buff, 1024);
		fd_t = open(argv[2], O_WRONLY, O_APPEND);
	} while (r > 0);
	free(buff);
	close(fd_f);
	close(fd_t);

	return (0);
}
/**
 * create_buffer - Allocates 1024 bytes for a buffer
 * @file: The name of the file buffer
 * Return: A pointer to the newly-allocated buffer
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}
/**
 * close_file - function for closing a file
 * @fd: file descriptor to close
 * Return: void
 */
void close_file(int fd)
{
	int d;

	d = close(fd);
	if (d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
