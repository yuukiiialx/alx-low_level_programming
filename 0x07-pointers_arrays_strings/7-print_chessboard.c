#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: Pointer to a 2D array representing the chessboard.
 *
 * Return: void (no return value).
 */

void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
