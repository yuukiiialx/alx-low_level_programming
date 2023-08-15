#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_times_table - Prints a multiplication table up to a specified number.
 *
 * This function generates and prints a multiplication table for numbers
 * from 0 to the given 'num'. It iterates through all possible combinations
 * of two numbers within the range and calculates their product, formatting
 * and printing the results in a tabular format.
 *
 * @num: The maximum number up to which the multiplication table is generated.
 *
 * Return: None (void)
 */

void print_times_table(int num)
{
	int i, j, result;

	if (num >= 0 && num <= 15)
	{
		for (i = 0; i <= num; i++)
		{
			_putchar('0');
			for (j = 1; j <= num; j++)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				result = i * j;
				if (result <= 99 && result <= 9)
				{
					_putchar(' ');
				}
				if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10)) % 10 + '0');
				}
				else if (result <= 99 && result >= 10)
				{
					_putchar((result / 10) + '0');
				}
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
