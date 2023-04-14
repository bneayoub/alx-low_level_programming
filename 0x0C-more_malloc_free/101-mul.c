#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * check_digits - checks if a string contains only digits
 * @str: the string to check
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int check_digits(const char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * add_strings - adds two strings representing numbers
 * @num1: first number as a string
 * @num2: second number as a string
 *
 * Return: the sum of the two numbers as a string (must be freed by caller)
 */
char *multiply_strings(const char *num1, const char *num2)
{
	int len1 = strlen(num1), len2 = strlen(num2);
	char *result = calloc(len1 + len2 + 1, sizeof(char));
	int i, j, k;

	for (k = 0; k < len1 + len2; k++)
	{
		result[k] = '0';
	}

	for (i = len2 - 1; i >= 0; i--)
	{
		int carry = 0;

		for (j = len1 - 1; j >= 0; j--)
		{
			int product = (num1[j] - '0') * (num2[i] - '0') + carry;
			int current_sum = result[i + j + 1] - '0' + product;

			result[i + j + 1] = (current_sum % 10) + '0';
			carry = current_sum / 10;
		}
		if (carry)
		{
			result[i] = (result[i] - '0' + carry) % 10 + '0';
		}
	}

	if (result[0] == '0')
	{
		memmove(result, result + 1, len1 + len2);
	}

	return (result);
}

/**
 * main - entry point of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	char *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!check_digits(argv[1]) || !check_digits(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	result = multiply_strings(argv[1], argv[2]);
	printf("%s\n", result);
	free(result);

	return (0);
}
