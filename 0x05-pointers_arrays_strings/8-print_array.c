#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_array - Prints an array of integers.
 * @a: Pointer to the array of integers.
 * @n: The number of elements in the array.
 *
 * This function takes an array of integers and
 *                  the number of elements in the array
 * and prints the elements separated by commas and a space.
 *                      It ensures that there is
 * no trailing comma after the last element.
 *              A newline is added at the end of printing.
 *
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
