#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string
 * @s: The string to be capitalized
 *
 * Description: This function takes a string as input
 *			and capitalizes the first letter
 *          of each word in the string. It considers words
 *			as separated by spaces,
 *          tabs, newlines, commas, semicolons,
 *			periods, exclamation marks,
 *          question marks, double quotes, parentheses, and curly brackets.
 *
 * Return: The capitalized string
 */


char *cap_string(char *s)
{
	int i, j;
	char words[] = {' ', '\t', '\n', ',', ';', '.'
		, '!', '?', '"', '(', ')', '{', '}'};

	if (*(s + i) >= 'a' && *(s + i) <= 'z')
		*(s + i) = *(s + i) - 32;
	i++;

	do {
		for (j = 0; j < 13; j++)
		{
			if (*(s + i) == words[j])
			{
				if ((*(s + (i + 1)) >= 'a') && (*(s + (i + 1)) <= 'z'))
					*(s + (i + 1)) = *(s + (i + 1)) - 32;
				break;
			}
		}
		i++;
	} while (*(s + i) != '\0');

	return (s);
}
