#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array of elements
 *				and initializes it to zero.
 * @nmemb: Number of elements.
 * @size: Size in bytes of each element.
 *
 * Description: This function allocates memory for an array of elements
 * each of the given size in bytes
 *	It initializes the allocated memory to zero
 * The total memory allocated is equal to 'nmemb * size' bytes.
 *			If either 'nmemb'
 * or 'size' is 0, or if memory allocation fails, the function returns NULL.
 *
 * Return: A pointer to the allocated memory (initialized to zero)
 *					or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *fill;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	fill = ptr;
	for (i = 0; i < (nmemb * size); i++)
		fill[i] = 0;

	return (ptr);
}

