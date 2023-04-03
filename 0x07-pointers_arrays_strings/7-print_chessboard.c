#include "main.h"
/**
 * print_chessboard - prints the chessboard,
 * by correctly showing the pieces first letters
 *
 * @a: string of dimension 8
 *
 * Return: the chessboards letters correctly diplayed
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (i <= 7)
	{
		while (j <= 7)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
