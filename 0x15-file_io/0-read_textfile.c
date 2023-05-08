#include "main.h"
/**
 * read_textfile - read a text file and prints it
 *
 * @filename: file to read
 * @letters: size of bytes to print
 *
 * Return: actual number of letters it should read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, read_f, write_f;
	char *buf;

	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	fd = open(filename, O_RDONLY);
	read_f = read(fd, buf, letters);
	write_f = write(STDOUT_FILENO, buf, read_f);
	if (fd == -1 || read_f == -1 || write_f == -1 || write_f != read_f)
	{
		free(buf);
		return (0);
	}

	free(buf);
	if (close(fd) == -1)
		return (0);

	return (write_f);
}
