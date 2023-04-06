#include "main.h"
/**
 * check_palindrome_recursion - helps find if *sting is palindrome or not
 * using recursion
 *
 * @s: the string to check
 * @left: variable to check left part of the string
 * @right: variable to check right part of the string
 *
 * Return: 0 if *s is not palindrome
 * 1 if *s is palindrome
 */
int check_palindrome_recursion(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	if (s[left] != s[right])
	{
		return (0);
	}
	return (check_palindrome_recursion(s, left + 1, right - 1));
}

/**
 * _strlen_recursion - calculate str length
 * using recursion
 *
 * @s: string to count len
 *
 * Return: int length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - checks if a string is palindrome
 * using recursion
 *
 * @s: string to check
 *
 * Return: 0 if s is not palindrome
 * 1 if s is palindrome
 */
int is_palindrome(char *s)
{
	return (check_palindrome_recursion(s, 0, _strlen_recursion(s) - 1));
}
