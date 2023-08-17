#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Finds and prints the largest prime factor of
 *          the number 612852475143.
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long int n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n /= i;
			i--;
		}
	}
	printf("%d\n", i);
	return (0);
}

