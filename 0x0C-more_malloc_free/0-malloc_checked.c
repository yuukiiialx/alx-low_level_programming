#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocate memory using malloc.
 * @b: The size of the memory to allocate.
 *
 * Description: This function allocates memory of size 'b' using malloc.
 * If malloc fails to allocate memory, the program is terminated with
 * status 98.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}

