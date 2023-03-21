#include <unistd.h>
/**
 * main - _putchar
 *
 * Return: 0
 */
int _putchar(char s)
{
	write(1, &s, 1);
	return (0);
}