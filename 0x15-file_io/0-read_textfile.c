#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: name of the file
 * @letters: the number of letters to read and write
 * Return: the actual number of letters it could read and write
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t out, print;
	char *buffer;

	buffer = malloc(letters + 1);
	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	out = read(fd, buffer, letters);
	if (out == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	buffer[out] = '\0';

	print = write(STDOUT_FILENO, buffer, out);
	if (print == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);

	return (print);
}
