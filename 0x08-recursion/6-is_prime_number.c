#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_prime_number - Checks if a number is prime using recursion.
 * @n: The number to check for primality.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
	{
	return (0);
	}
	return (is_prime(n, start));
}

/**
 * is_prime - Helper function to check if a number is prime
 *			recursively within a given range.
 * @n: The number to check for primality.
 * @start: The current value to check divisibility with.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_prime(int n, int start)
{
	if (start <= 1)
	{
	return (1);
	}
	else if (n % start == 0)
	{
	return (0);
	}
	return (is_prime(n, start - 1));
}
