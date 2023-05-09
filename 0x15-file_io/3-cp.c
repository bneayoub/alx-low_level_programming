#include "main.h"
/**
 * main - chack the code
 *
 * @argc: number of arguments
 * @argv: args list
 *
 * Return: 0, 97, 98, 99, 100 depending on success
 * or error due to a type of errors
*/
int main(int argc, char *argv[])
{
	int file_from, file_to, r, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_file_from file_file_to\n");
		exit(97);
	}

	buf = allocate_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	r = read(file_from, buf, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read file_from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		w = write(file_to, buf, r);
		if (file_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write file_to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		r = read(file_from, buf, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buf);
	close(file_from);
	close(file_to);
	return (0);
}

/**
 * allocate_buffer - allocate 1024 bytes for a buffer
 *
 * @file: file that we are creating buffer for
 *
 * Return: buffer
*/
char *allocate_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}
