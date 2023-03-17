#include <stdio.h>
/**
 * main - prints all possible combos of two two-digits.
 *
 * Return: 0
*/
int main(void)
{
int number1 = 0, number2 = 1;

while (number1 < 100)
{
	while (number2 < 100)
	{
		putchar(number1 / 10 + '0');
		putchar(number1 % 10 + '0');
		putchar(' ');
		putchar(number2 / 10 + '0');
		putchar(number2 % 10 + '0');
		if (number1 != 98 || number2 != 99)
		{
			putchar(',');
			putchar(' ');
		}
		number2++;
	}
	number1++;
	number2 = number1 + 1;
}
putchar('\n');
return (0);
}
