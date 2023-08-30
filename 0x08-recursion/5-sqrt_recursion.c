#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _sqrt_recursion - Computes the square root of a number using recursion.
 * @n: The number to compute the square root of.
 *
 * Return: The square root of the number.
 *         If the number does not have a natural square root, returns -1.
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt(0, n));
}

/**
 * _sqrt - Helper function to find the square root recursively
 *	within a given range.
 * @n: The current value to check for a square root.
 * @x: The original number for which to calculate the square root.
 *
 * Return: The square root of the number.
 *         If the number does not have a natural square root, returns -1.
 */

int _sqrt(int n, int x)
{
	if (n > x / 2)
	{
		return (-1);
	}
	else if (n * n == x)
	{
		return (n);
	}
	return (_sqrt(n + 1, x));
}
