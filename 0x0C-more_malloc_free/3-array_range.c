#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers from min to max (inclusive).
 * @min: The minimum value (included) of the array.
 * @max: The maximum value (included) of the array.
 *
 * Description: This function creates an array of integers from 'min' to 'max'
 * (inclusive). It allocates memory for the array
 *				populates it with values from
 * 'min' to 'max', and returns a pointer
 *				to the newly created array. If 'min' is
 * greater than 'max' or if memory allocation fails, the function returns NULL.
 *
 * Return: A pointer to the newly created array, or NULL on failure.
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}

