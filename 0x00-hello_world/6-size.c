#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int Int;
char Char;
long int LongInt;
float Float;
long long int LongLongInt;
printf("Size of a char: %lu byte(s)\n", sizeof(Char));
printf("Size of an int: %lu byte(s)\n", sizeof(Int));
printf("Size of a long int: %lu byte(s)\n", sizeof(LongInt));
printf("Size of a long long int: %lu byte(s)\n", sizeof(LongLongInt));
printf("Size of a float: %lu byte(s)\n", sizeof(Float));
return (0);
}
