#include <stdio.h>
/**
 * main - print largest primary factor
 * Return: void
 */
int main(void)
{
	int long long n;
	int long long counter = 2;

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
	printf("%llu\n", counter);
	return (1);
}
