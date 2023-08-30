#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * factorial - Computes the factorial of a number using recursion.
 * @n: The number to compute the factorial of.
 *
 * Return: The factorial of the number, or -1 if the number is negative.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
