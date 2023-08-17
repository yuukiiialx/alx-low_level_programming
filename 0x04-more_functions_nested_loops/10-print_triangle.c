#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * print_triangle - Prints a triangle made of '#' characters.
 * @size: The size of the triangle to be printed.
 *
 * Description:
 * If @size is zero or negative, a newline is printed.
 * Otherwise, a triangle of '#' characters is printed,
 * with each row containing an increasing number of '#'
 * characters, ranging from 1 to @size.
 */

void print_triangle(int size)
{
	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 1; i <= 5; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
