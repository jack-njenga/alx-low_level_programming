#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: content to append
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		if (errno == ENOENT)
			return (-1);
		else if (errno == EACCES)
			return (-1);
		else
			return (-1);
	}
	wr = write(fd, text_content, strlen(text_content));
		if (wr == -1)
			return (-1);

	close(fd);

	return (1);
}
