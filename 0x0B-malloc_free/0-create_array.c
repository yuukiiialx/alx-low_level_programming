#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of characters and
 *			initializes it with a given character.
 * @size: The size of the array to create.
 * @c: The character to initialize the array elements with.
 *
 * Return: A pointer to the newly created array,
 *		or NULL if size is 0 or if memory allocation fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	char *array = malloc(sizeof(char) * size);
	{
	if (array == NULL)
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}

