#include <stdlib.h>
#include <stdio.h>

char *create_array_x(int size);
char *skip_leading_zeroes(char *str);
void multiply_strings(char *prod, char *mult, int digit, int zeroes);
void add_string_numbers(char *final_prod, char *next_prod, int next_len);

/**
 * find_len - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * create_array_x - Allocates memory for an array
 * of chars, initializes each element
 * with the character 'x', and appends a null terminator at the end.
 *
 * @size: The size of the array to be created and initialized.
 *
 * Return: A pointer to the newly created and initialized array.
 */
char *create_array_x(int size)
{
	char *array;
	int i;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for (i = 0; i < (size - 1); i++)
		array[i] = 'x';

	array[i] = '\0';

	return (array);
}

/**
 * skip_leading_zeroes - Advances the pointer through
 * a numeric string, skipping
 * any leading zeroes, until a non-zero character is reached.
 *
 * @str: The string of numbers to be processed.
 *
 * Return: A pointer to the first non-zero character in the string.
 */
char *skip_leading_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * char_to_int - Converts a single digit character to
 * its corresponding integer value.
 *
 * @c: The character to be converted.
 *
 * Return: The integer representation of the digit character.
 */
int char_to_int(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digit);
}

/**
 * multiply_strings - multiplies two strings representing numbers
 * @prod: buffer of the result
 * @mult: The string of numbers.
 * @digit: The single digit.
 * @zeroes: The necessary number of leading zeroes.
 *
 * Return : multiplication
 */
void multiply_strings(char *prod, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = find_len(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*prod = (tens % 10) + '0';
}

/**
 * add_string_numbers - Adds the numeric values represented by two strings.
 *
 * @final_prod: The buffer storing the current sum of the numbers.
 * @next_prod: The next number to be added, represented as a string.
 * @next_len: The length of the next_prod string.
 *
 * Return : The function assumes both input strings contain only digits
 * and updates the final_prod buffer with the new sum.
 */
void add_string_numbers(char *final_prod, char *next_prod, int next_len)
{
	int num, tens = 0;

	while (*(final_prod + 1))
		final_prod++;

	while (*(next_prod + 1))
		next_prod++;

	for (; *final_prod != 'x'; final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		next_prod--;
		next_len--;
	}

	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		num = (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		final_prod--;
		next_prod--;
	}

	if (tens)
		*final_prod = (tens % 10) + '0';
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
	char *final_prod, *next_prod;
	int size, index, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = skip_leading_zeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = skip_leading_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = find_len(argv[1]) + find_len(argv[2]);
	final_prod = create_array_x(size + 1);
	next_prod = create_array_x(size + 1);

	for (index = find_len(argv[2]) - 1; index >= 0; index--)
	{
		digit = char_to_int(*(argv[2] + index));
		multiply_strings(next_prod, argv[1], digit, zeroes++);
		add_string_numbers(final_prod, next_prod, size - 1);
	}
	for (index = 0; final_prod[index]; index++)
	{
		if (final_prod[index] != 'x')
			putchar(final_prod[index]);
	}
	putchar('\n');

	free(next_prod);
	free(final_prod);

	return (0);
}
