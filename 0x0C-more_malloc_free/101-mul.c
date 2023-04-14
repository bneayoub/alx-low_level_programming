#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * error - handles errors for main
 *
 * Return : exit with 98, and prints Error
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * _isdigit - verifies if a given string consists
 * exclusively of digit characters
 *
 * @s: the string to be checked
 *
 * Return: 1 if all characters in the string are digits,
 * 0 if any non-digit character is present
 */
int _isdigit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - entry point of the program
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	char *str1, *str2;
	int len_str1, len_str2, len, i, carry, digit1, digit2, *array_mul, a = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !_isdigit(str1) || !_isdigit(str2))
		error();
	len_str1 = strlen(str1);
	len_str2 = strlen(str2);
	len = len_str1 + len_str2 + 1;
	array_mul = malloc(sizeof(int) * len);
	if (!array_mul)
		return (1);
	for (i = 0; i <= len_str1 + len_str2; i++)
		array_mul[i] = 0;
	for (len_str1 = len_str1 - 1; len_str1 >= 0; len_str1--)
	{
		digit1 = str1[len_str1] - '0';
		carry = 0;
		for (len_str2 = strlen(str2) - 1; len_str2 >= 0; len_str2--)
		{
			digit2 = str2[len_str2] - '0';
			carry += array_mul[len_str1 + len_str2 + 1] + (digit1 * digit2);
			array_mul[len_str1 + len_str2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			array_mul[len_str1 + len_str2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (array_mul[i])
			a = 1;
		if (a)
			_putchar(array_mul[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(array_mul);
	return (0);
}
