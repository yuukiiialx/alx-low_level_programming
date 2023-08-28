#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strstr - Locates a substring within a string.
 * @haystack: Pointer to the string to search.
 * @needle: Pointer to the substring to find.
 *
 * Return: Pointer to the first occurrence of the substring (@needle)
 *         within the string (@haystack), or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		for (i = 0; haystack[i] == needle[i]; i++)
		{
			if (needle[i + 1] == '\0')
				return (haystack);
		}
		haystack++;
	}
	return (NULL);
}

