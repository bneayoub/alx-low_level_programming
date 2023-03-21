#include <unistd.h>
/**
 * main - _putchar
 *
 * Return: 0
 */
int _putchar(char s)
{
	return (write(1, &s, 1));
}