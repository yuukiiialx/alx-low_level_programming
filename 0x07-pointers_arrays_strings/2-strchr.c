#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string.
 * @c: Character to locate.
 *
 * Return: Pointer to the first occurrence of character (@c) in the string (@s)
 *         or NULL if character is not found.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	do {
		if (s[i] == c)
			return (s + i);
		i++;
	} while (s[i - 1] != '\0');

	return (NULL);
}

