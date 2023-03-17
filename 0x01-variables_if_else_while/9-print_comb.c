#include <stdio.h>
/**
*main - all single digits numberbers separated with
*
* Return: 0
*/
int main(void)
{
int number;
for (number = 0; number <= 9; number++)
{
	putchar((number % 10) + '0');
	if (number == 9)
	{
		continue;
	}
	putchar(',');
	putchar(' ');
}
putchar('\n');
return (0);
}
