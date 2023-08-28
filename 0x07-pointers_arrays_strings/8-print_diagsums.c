#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_diagsums - Prints the sum of diagonals in a square matrix.
 * @a: Pointer to the first element of the matrix.
 * @size: The size of the square matrix.
 *
 * Return: void (no return value).
 */

void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;

	do {
		sum1 += a[i];
		a += size;
		i++;
	} while (i < size);

	a -= size;
	i = 0;

	do {
		sum2 += a[i];
		a -= size;
		i++;
	} while (i < size);

	printf("%d, %d\n", sum1, sum2);
}
