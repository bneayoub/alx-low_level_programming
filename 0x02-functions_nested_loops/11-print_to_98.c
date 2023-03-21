#include <stdio.h>
/**
  * print_to_98 - prints all natural numbers to 98
  * @n: the numberof start
  *
  * Return: void
  */
void print_to_98(int n)
{
	int num = n;

	while (num != 98)
	{
		if (num < 98)
		{
			printf("%d, ", num);
			num++;
		}
		else if (num > 98)
		{
			printf("%d, ", num);
			num--;
		}
	}
	printf("%d\n", num);
}
