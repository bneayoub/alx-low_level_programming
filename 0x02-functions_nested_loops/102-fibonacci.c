#include <stdio.h>

/**
  * main - Fibonaci 50 first
  *
  * Return: always 0
  */
int main(void)
{
	unsigned long fibo1 = 1;
	unsigned long fibo2 = 2;
	int i = 0;

	while (i < 50)
	{
		printf("%lu", fibo1);
		if (i < 49)
		{
			fibo2 += fibo1;
			fibo1 = fibo2 - fibo1;
			printf(", ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
