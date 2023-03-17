#include<stdio.h>
/**
* main - print all alphabets
 *
 * Return: 0
*/
int main(void)
{
char alphabet = 'a';
while (alphabet <= 'z')
{
	putchar(alphabet);
	alphabet++;
}
putchar('\n');
return (0);
}
