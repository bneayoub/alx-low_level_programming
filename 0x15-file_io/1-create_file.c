#include "main.h"
/**
 * create_file - Create a file if it doesnt exist
 *
 * @filename: file name
 * @text_content: text to print
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd, len;

	if (!filename)
		return (-1);
	if (!text_content)
		len = 0;
	len = strlen(text_content);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	write(fd, text_content, len);

	close(fd);

	return (1);
}