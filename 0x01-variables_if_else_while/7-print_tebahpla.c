#include <stdio.h>
/**
 * main - all alphabets in reverse.
 *
 * Return: 0
*/
int main(void)
{
int alphabet = 'z';

while (alphabet >= 'a')
{
	putchar(alphabet);
	alphabet--;
}
putchar('\n');
return (0);
}
