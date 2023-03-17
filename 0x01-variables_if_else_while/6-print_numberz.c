#include <stdio.h>
/**
 * main - all digits from 0 to 9
 *
 * Return: 0
*/
int main(void)
{
int number = 0;
while (number <= 9)
{
	putchar(number + '0');
	number++;
}
putchar('\n');
return (0);
}
