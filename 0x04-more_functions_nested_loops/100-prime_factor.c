#include <stdio.h>
/**
 * main - print largest primary factor
 * Return: 0
 */
int main(void)
{
	long int n;
	long int counter = 2;

	n = 612852475143;

	while (counter <= n)
	{
		if (n % counter == 0)
		{
			n = n / counter;
			counter--;
		}
		counter++;
	}
	printf("%ld\n", counter);
	return (0);
}
