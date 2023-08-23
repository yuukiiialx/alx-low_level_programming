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
	int i = 0, j, k;

	do {
		j = i + 1;
		do {
			k = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = k;
			j--;
		} while (j > 0);
		i++;
	} while (i < n - 1);
}
