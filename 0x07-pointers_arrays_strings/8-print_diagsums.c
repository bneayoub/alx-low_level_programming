#include <stdio.h>
/**
 * print_diagsums - calculate and prints the right
 * and left sum of a given 2D array
 *
 * @a: 2D array
 * @size: sizer of our square array
 *
 * Return: void and displays the right and left
 * diagonal sums
 */
void print_diagsums(int *a, int size)
{
	int left_sum = 0, right_sum = 0, i;

	for (i = 0; i < size; i++)
	{
		left_sum += *(a + i * size + i);
		right_sum += *(a + i * size + (size - i - 1));
	}

	printf("%d, %d\n", left_sum, right_sum);
}
