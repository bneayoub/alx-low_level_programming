#include<stdio.h>
#include<unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, quote, sizeof(quote) - 1);
return (1);
}
