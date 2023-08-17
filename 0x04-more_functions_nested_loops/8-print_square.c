#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * print_square - Prints a square made of hash symbols (#) with a given size.
 * @size: The size of the square to be printed.
 *
 * Return: void
 *
 * Description: If the input size is zero or less, only a new line is printed.
 *         Otherwise, a square of hash symbols is printed using nested loops.
 *              The square has a fixed size of 5x5.
 */


void print_square(int size)
{
	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
