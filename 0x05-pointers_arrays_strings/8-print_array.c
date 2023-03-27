#include "main.h"
#include<stdio.h>
/**
 * print_array - check code
 * @a: the array
 * @n: the number of element to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	if (n >= 0)
	{
		while (i < n)
		{
			if (i + 1 < n)
				printf("%d, ", a[i]);
			else
				printf("%d", a[i]);
			i++;
		}
	}
	printf("\n");
}
