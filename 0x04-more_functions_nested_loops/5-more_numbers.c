#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * more_numbers - is a function that prints the numbers 0 to 14
 *				followed by a new line ten times
 *
 *
 *
 *
 * Return: none
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar('1');
			}
				_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
