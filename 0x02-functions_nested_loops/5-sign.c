#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @num: The number to check
 *
 * This function checks the sign of the given number and prints the
 * appropriate sign character ('+', '-', or '0') along with a newline.
 * Return: 1 if positive, -1 if negative, 0 if zero
 */

int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
