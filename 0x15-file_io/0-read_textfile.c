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
	ssize_t fd = open(filename, O_RDONLY), read_f;
	char *buf = malloc(sizeof(char) * letters);

	read_f = read(fd, buf, letters);

	if (!filename || fd == -1 || read_f == -1)
		return (0);

	close(fd);

	return (write(1, buf, read_f));
}
