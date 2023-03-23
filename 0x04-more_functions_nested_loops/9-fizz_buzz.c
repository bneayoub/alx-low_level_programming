#include <stdio.h>
/**
 * main - prints FizzBuzz
 * Return: void
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 15 != 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0 && i % 15 != 0 && i != 100)
		{
			printf("Buzz ");
		}
		else if (i % 5 == 0 && i % 15 != 0 && i == 100)
		{
			printf("Buzz\n");
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}

		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
