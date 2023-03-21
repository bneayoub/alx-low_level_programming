#include <stdio.h>
/**
  * main - entry point of our program
  *
  * Return: always 0 (secusses)
  */
int main(void)
{
	int i;
	long int somme;

	i = 0;
	somme = 0;
	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			somme += i;
			i++;
		}
		else
			i++;
	}
	printf("%ld\n", somme);
	return (0);
}
