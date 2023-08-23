#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * reverse_array - Reverses the elements in an integer array.
 *
 * @a: Pointer to the integer array.
 * @n: Length of the integer array.
 *
 * Description: This function takes an integer array and its length as input
 * and reverses the order of its elements.
 * It uses a do-while loop to iterate over the array,
 * swapping each element with its previous element,
 * until the entire array is reversed.
 *
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = n - 1; i >= n / 2; i--)
	{
		j = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = j;
	}
}
