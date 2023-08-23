#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 *
 * Description:
 *   This function takes an integer and prints it to the standard output.
 *   If the integer is negative, it is preceded by a minus sign (-).
 *   The function recursively breaks down the integer into its individual
 *   digits and prints them in reverse order.
 *
 */



void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
