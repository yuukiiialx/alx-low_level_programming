#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_length - Computes the length of a string.
 * @str: The string to compute the length of.
 *
 * Return: The length of the string.
 */
int str_length(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to a newly allocated string containing the concatenated
 *         s1 and s2, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	int len1 = str_length(s1);
	int len2 = str_length(s2);
	int total_len = len1 + len2 + 1;
	int i, j;

	char *concat_str = malloc(total_len * sizeof(char));

	if (concat_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		concat_str[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		concat_str[i] = s2[j];
		i++;
	}

	concat_str[total_len - 1] = '\0';

	return (concat_str);
}

