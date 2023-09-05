#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * wrdcnt - Counts the number of words in a string.
 * @s: Input string to count words from.
 *
 * This function counts the number of words in a given string.
 * Words are separated by spaces. It considers consecutive spaces
 * as a single separator and ignores leading and trailing spaces.
 *
 * @s: The input string to count words in.
 *
 * Return: The number of words in the string.
 */

int wrdcnt(char *s)
{
	int index, numbers = 0;

	for (index = 0; s[index]; index++)
	{
		if (s[index] == ' ')
		{
			if (s[index + 1] != ' ' && s[index + 1] != '\0')
				numbers++;
		}
		else if (index == 0)
			numbers++;
	}
	numbers++;
	return (numbers);
}

/**
 * strtow - Splits a string into words.
 * @str: Input string to be split into words.
 *
 * This function takes an input string and splits it into individual words,
 * where words are separated by spaces. It dynamically allocates memory for
 * each word and returns an array of pointers to these words.
 *
 * @str: The input string to be split.
 *
 * Return: Double pointer to an array of strings or NULL on error.
 */

char **strtow(char *str)
{
	int index, j, temp, size, numbers = 0, words = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	numbers = wrdcnt(str);
	if (numbers == 1)
		return (NULL);
	w = (char **)malloc(numbers * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[numbers - 1] = NULL;
	index = 0;
	while (str[index])
	{
		if (str[index] != ' ' && (index == 0 || str[index - 1] == ' '))
		{
			for (j = 1; str[index + j] != ' ' && str[index + j]; j++)
				;
			j++;
			w[words] = (char *)malloc(j * sizeof(char));
			j--;
			if (w[words] == NULL)
			{
				for (temp = 0; temp < words; temp++)
					free(w[temp]);
				free(w[numbers - 1]);
				free(w);
				return (NULL);
			}
			for (size = 0; size < j; size++)
				w[words][size] = str[index + size];
			w[words][size] = '\0';
			words++;
			index += j;
		}
		else
			index++;
	}
	return (w);
}

