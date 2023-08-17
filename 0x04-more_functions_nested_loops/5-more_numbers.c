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
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j < 10)
			{
				_putchar('0' + j);
			}
			else
			{
				_putchar('1');
				_putchar('0' + (j - 10));
			}
		}
		_putchar('\n');
	}
}
