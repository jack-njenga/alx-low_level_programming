#include "main.h"
/**
 * creat_file - creates a file 
 * @filename: name of the file
 * @text_content: the content to write to the file
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
		return (-1);
	if (access(filename, F_OK) != -1)
	{
		fd = open(filename, O_WRONLY | O_TRUNC);
		if (fd == -1)
			return (-1);
		wr = write(fd, text_content, strlen(text_content));
		if (wr == -1)
			return (-1);
		return (1);
		close(fd);

	}
	if (text_content == NULL)
	{
		fd = open("filename", O_CREAT, 0600);
		if (fd == -1)
			return (-1);

		close (fd);
		return (1);	
	}
	fd = open("filename", O_WRONLY | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	wr = write(fd, text_content, strlen(text_content));
	if (wr == -1)
		return (-1);
	close(fd);

	return (1);
}
