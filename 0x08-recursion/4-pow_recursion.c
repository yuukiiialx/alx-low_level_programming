#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _pow_recursion - Computes the power of a number using recursion.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The result of x raised to the power of y.
 *         If the exponent is negative, returns -1.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
