#include <stdio.h>
/**
 * main - prints the sign of the number
 *
 * Return: 0
*/
void positive_or_negative(int n)
{
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	if (n == 0)
	{
	printf("%d is zero\n", n);
	}
}
