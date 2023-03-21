#include <stdio.h>

/**
 * main - fibo fibo
 *
 * Return: Always 0.
 */

int main(void)
{
	int n = 1;
	int m = 2;
	int s = 0;
	long int sum = 0;

	while (m <= 4000000)
	{
		if (m % 2 == 0)
			sum += m;
		s = m;
		m += n;
		n = s;
	}
	printf("%ld\n", sum);
	return (0);
}
