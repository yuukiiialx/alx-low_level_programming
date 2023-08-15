#include <stdio.h>
#include <stdlib.h>
#include <main.h>


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

int print_times_table(num)
{
	int i, j, result;

	for (i = 0; i <= num; i++)
	{
		for (j = 0; j <= num; j++)
		{
			result = i * j;
			putchar(i + '0');
			putchar(' ');
			putchar('x');
			putchar(' ');
			putchar(j + '0');
			putchar(' ');
			putchar('=');
			putchar(' ');


			if (result >= 10)
			{
				putchar(result / 10 + '0');
			}
			else
			{
				putchar(' ');
			}
			putchar(result % 10 + '0');
			putchar('\n');
		}
	}
}
