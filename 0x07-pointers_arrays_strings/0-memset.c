#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: The byte to fill the memory area with.
 * @n: The number of bytes to fill.
 *
 * Return: A pointer to the filled memory area (@s).
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	do {
		*(s + i) = b;
		i++;
	} while (i < n);

	return (s);
}
