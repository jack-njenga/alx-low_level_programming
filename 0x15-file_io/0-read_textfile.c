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
	char buffer[letters + 1]

	if (filename == NULL)
		return (0);

	fd = open(filename, "O_RDONLY");
	if (fd == -1)
		return (0);
	print("%d\n", fd);
	out = read(fd, buffer, sizeof(buffer));
	if (out == -1)
		return (0);
	printf("%d\n", out);
	print = write(STDOUT_FILENO, buffer, out);
	if (print == -1)
		return (0);

	close(fd);
	return (print);
}
