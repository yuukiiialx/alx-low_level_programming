#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Description: This function appends the contents of src to the end of dest.
 * It finds the end of dest and appends each character of src to dest until it
 * reaches the null terminator of src. It then adds a null terminator to the
 * resulting string and returns a pointer to it.
 *
 *
 * Return: A pointer to the resulting string.
 *
 */


char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	do {
		dest[i] = src[j];
		j++;
		i++;
	} while (src[j - 1] != '\0');

	dest[i] = '\0';
	return (dest);
}
