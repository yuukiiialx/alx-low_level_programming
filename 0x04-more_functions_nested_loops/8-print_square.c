#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * print_square - Prints a square of a given size using '#'.
 *
 * @size: The size of the square to be printed.
 *
 * Return: void
 */


void print_square(int size)
{
	int i, j;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
