#include <unistd.h>
/**
 * _putchar - prints char
 * @s: char to be printed
 * Return: char
 */
int _putchar(char s)
{
	return (write(1, &s, 1));
}
