#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * _strncpy - Copies a string up to n bytes from src to dest
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to copy
 *
 * Description: This function copies at most n bytes from the source string,
 *  src, to the destination string, dest. If the length of src is
 *  less than n, the remaining bytes in dest are filled with null terminators.
 *
 *
 * Return: A pointer to the destination string
 */





char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
