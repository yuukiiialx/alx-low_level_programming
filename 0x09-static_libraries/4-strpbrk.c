#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the set of characters to search for.
 *
 * Return: Pointer to the first occurrence in (@s) of any character
 *         from the string (@accept), or NULL if no match is found.
 */

char *_strpbrk(char *s, char *accept)
{
	do {
		int i = 0;

		while (accept[i])
		{
			if (accept[i] == *s)
				return (s);
			i++;
		}
		s++;
	} while (*s);

	return (NULL);
}

