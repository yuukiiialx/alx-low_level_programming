#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * times_table - Prints the multiplication table for numbers from 0 to 9.
 *
 * This function generates and prints a multiplication table for numbers
 * from 0 to 9. It iterates through all possible combinations of two
 * numbers and calculates their product, formatting and printing the
 * results in a tabular format.
 *
 * Return: None (void)
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			_putchar(i + '0');
			_putchar(' ');
			_putchar('x');
			_putchar(' ');
			_putchar(j + '0');
			_putchar(' ');
			_putchar('=');
			_putchar(' ');


			if (result >= 10)
			{
				_putchar(result / 10 + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar(result % 10 + '0');
			_putchar('\n');
		}
	}
}

