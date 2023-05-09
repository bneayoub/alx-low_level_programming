#include "main.h"

/**
 * check97 - checks 97
 *
 * @argc: number of arguments
 *
 * Return: void
 */
void check97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check98 - checks 98
 *
 * @check: checks if true of false
 * @file: file_from name
 * @file_from: file descriptor of file_from, or -1
 * @file_to: file descriptor of file_to, or -1
 *
 * Return: void
 */
void check98(ssize_t check, char *file, int file_from, int file_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (file_from != -1)
			close(file_from);
		if (file_to != -1)
			close(file_to);
		exit(98);
	}
}

/**
 * check99 - check 99
 *
 * @check: checks if true of false
 * @file: file_to name
 * @file_from: file descriptor of file_from, or -1
 * @file_to: file descriptor of file_to, or -1
 *
 * Return: void
 */
void check99(ssize_t check, char *file, int file_from, int file_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (file_from != -1)
			close(file_from);
		if (file_to != -1)
			close(file_to);
		exit(99);
	}
}

/**
 * check100 - 100
 *
 * @check: checks if true or false
 * @fd: file descriptor
 *
 * Return: void
 */
void check100(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - check the code
 *
 * @argc: number of args
 * @argv: args list
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, close_to, close_from;
	ssize_t lenr, lenw;
	char buffer[1024];
	mode_t file_perm;

	check97(argc);
	file_from = open(argv[1], O_RDONLY);
	check98((ssize_t)file_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	check99((ssize_t)file_to, argv[2], file_from, -1);
	lenr = 1024;
	while (lenr == 1024)
	{
		lenr = read(file_from, buffer, 1024);
		check98(lenr, argv[1], file_from, file_to);
		lenw = write(file_to, buffer, lenr);
		if (lenw != lenr)
			lenw = -1;
		check99(lenw, argv[2], file_from, file_to);
	}
	close_to = close(file_to);
	close_from = close(file_from);
	check100(close_to, file_to);
	check100(close_from, file_from);
	return (0);
}
