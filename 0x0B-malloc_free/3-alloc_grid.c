#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a grid of zeros
 *
 * @width: width of our grid
 * @height: height of our grid
 *
 * Return: 2D array of given width and height full of 0's
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array_2D = malloc(sizeof(int *) * height);

	if (array_2D == NULL)
		return (NULL);
	if (width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array_2D[i] = malloc(sizeof(int) * width);
		if (array_2D[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array_2D[j]);
			}
			free(array_2D);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array_2D[i][j] = 0;
	}
	return (array_2D);
}
