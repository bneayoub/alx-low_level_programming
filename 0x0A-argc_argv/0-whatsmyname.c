#include <stdio.h>
/**
 * main - prints the program name
 *
 * @argc: the number of arguments passed to the program
 * @argv: pointer to an array of chars represents
 * arguments passed to the program
 *
 * Return: void and prints the function name
 * followed by a new line
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
