#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes.
 *
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to concatenate.
 *
 * Description:
 * Appends the contents of src to dest up to a maximum of n bytes.
 * It finds the end of dest and appends each character of src until it reaches
 * the null terminator of src or the maximum number of bytes, n, is reached.
 * Finally, it adds a null terminator to the resulting string.
 *
 * Return: A pointer to the resulting string.
 */


char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	do {
		i++;
	} while (*(dest + i) != '\0');

	do {
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	} while (j < n);

	return (dest);
}
