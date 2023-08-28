#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string of characters to match.
 *
 * Return: Number of bytes in the initial segment of (@s)
 *         which consist only of characters from (@accept).
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;

	do {
		char *temp_accept = accept;

		while (*temp_accept)
		{
			if (*s == *temp_accept)
			{
				bytes++;
				break;
			}
			temp_accept++;
		}

		if (!*temp_accept)
			return (bytes);

		s++;
	} while (*s);

	return (bytes);
}
