#include <stdio.h>
#include <stdlib.h>
/**
 * main - calculate minimum coins necessary
 * to give back the change
 *
 * @argc: the number of arguments passed to the program
 * @argv: pointer to an array of chars represents
 * arguments passed to the program
 *
 * Return: 1 if Error (argc!=2)
 * 0 if success, and prints minimum number of coins
 * to give back the change
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = 0;
	int i;
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	change = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		num_coins += change / coins[i];
		change %= coins[i];
	}

	printf("%d\n", num_coins);
	return (0);
}
