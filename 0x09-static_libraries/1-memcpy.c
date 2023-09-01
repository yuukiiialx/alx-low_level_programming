#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: Pointer to destination memory.
 * @src: Pointer to source memory.
 * @n: Number of bytes to copy.
 *
 * Return: Pointer to destination memory (@dest).
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
