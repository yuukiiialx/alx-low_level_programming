#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * print_number - Prints an integer to the console
 * @n: The integer to be printed
 *
 * Return: none
 */

void print_number(int n)
{
	int digit, div = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / div >= 10)
	{
		div *= 10;
	}

	while (div != 0)
	{
		digit = n / div;
		_putchar(digit + '0');
		n %= div;
		div /= 10;
	}
}

