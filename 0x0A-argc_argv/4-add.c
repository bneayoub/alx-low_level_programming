#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints result of adding all arguments
 * if they exist
 *
 * @argc: the number of arguments passed to the program
 * @argv: pointer to an array of chars represents
 * arguments passed to the program
 *
 * Return: 0 and prints the sum of all args (0 if none exist)
 * else, return 1 and prints 'Error' if one of the arguments
 * passed is not a digit
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	int is_digit;

	if (argc == 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		is_digit = 1;
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				is_digit = 0;
				break;
			}
		}

		if (!is_digit)
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
