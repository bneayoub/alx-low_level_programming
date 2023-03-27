#include "main.h"
/**
  * print_array - check code
  * @a: the array
  * @n: the number of element to print
  * Return: void
  */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));
		if (i == (n - 1))
			break;
		printf(", ");
		i++;

	}
	printf("\n");
}
