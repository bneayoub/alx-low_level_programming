#include <stdio.h>

/**
 * main - all hexadecimal numbers
 *
 * Return: 0
*/

int main(void)
{
char number_char = '0';
char alphabet = 'a';

while (number_char <= '9')
{
	putchar(number_char);
	number_char++;
}
while (alphabet < 'g')
{
	putchar(alphabet);
	alphabet++;
}
putchar('\n');

return (0);
}
