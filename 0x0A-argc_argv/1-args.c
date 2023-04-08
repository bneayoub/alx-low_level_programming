#include <stdio.h>
/**
 * main - prints the number of arguments passed
 * to the program
 *
 * @argc: the number of arguments passed to the program
 * @argv: pointer to an array of chars represents
 * arguments passed to the program
 *
 * Return: int and prints the number of arguments
 * passed to the program
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
