#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: 2D array of chars representing the chessboard
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]); // Print each element of the array
		_putchar('\n'); // Print a new line to move to the next row
	}
}
