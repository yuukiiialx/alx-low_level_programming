#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string,
 *		or NULL if memory allocation fails.
 */

char *str_concat(char *s1, char *s2)
{
	char *con;
	int i, j = 0,  length = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
	{
		length++;
	}
	con = malloc(sizeof(char) * length);

	if (con == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		con[j++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		con[j++] = s2[i];
	}
	return (con);
}
