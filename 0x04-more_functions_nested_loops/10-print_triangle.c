#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * print_triangle - Prints a right-aligned triangle pattern
 *			of a given size using '#'
 *
 * @size: The size of the triangle to be printed.
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j <= size; j++)
		{
			for (i = size - j; i > 0; i--)
			{
				_putchar(' ');
			}
			for (i = 0; i < j; i++)
			{
				_putchar('#');
			}
			if (j == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
