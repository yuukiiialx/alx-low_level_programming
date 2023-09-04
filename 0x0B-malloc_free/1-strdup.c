#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicate a string.
 * @str: The string to duplicate.
 *
 * Description:
 *   The _strdup function duplicates the input string str and returns a
 *   pointer to the duplicated string. Memory for the duplicated string
 *   is obtained with malloc. The duplicated string
 *   should be freed using free
 *   when it is no longer needed.
 *
 * Return: A pointer to the duplicated string,
 *         or NULL if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int len = 0;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}

