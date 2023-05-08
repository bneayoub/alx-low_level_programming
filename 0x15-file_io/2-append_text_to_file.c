#include "main.h"
/**
 * append_text_to_file - appends text to file
 *
 * @filename: file name
 * @text_content: text to append
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, len, write_f;

	if (!filename)
		return (-1);

	if (!text_content)
		len = 0;
	else
		len = strlen(text_content);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	write_f = write(fd, text_content, len);
	if (write_f == 1)
		return (-1);

	close(fd);

	return (1);
}
