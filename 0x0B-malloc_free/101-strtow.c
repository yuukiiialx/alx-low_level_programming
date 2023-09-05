#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * strtow - Splits a string into words.
 * @str: Input string to be split.
 *
 * Return: Double pointer to an array of strings or NULL on error.
 *
 * This function takes an input string and splits it into individual words
 * based on spaces. It dynamically allocates memory for the words and returns
 * a NULL-terminated array of strings. Remember to free the memory using
 * free_str_arr() to prevent memory leaks.
 */

char **strtow(char *str)
{
	char **sp;
	int i, j = 0, k = 0, s = 0, words = num_words(str);

	if (words == 0)
		return (NULL);

	sp = (char **)malloc(sizeof(char *) * (words + 1));
	if (sp == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			s++;
		}
		else if (i > 0 && str[i - 1] != ' ')
		{
			sp[j] = (char *)malloc(sizeof(char) * (s + 1));
			if (sp[j] == NULL)
			{
				while (j >= 0)
				{
					free(sp[j]);
					j--;
				}
				free(sp);
				return (NULL);
			}

			for (k = 0; k < s; k++)
			{
				sp[j][k] = str[i - s + k];
			}
			sp[j][k] = '\0';
			s = 0;
			j++;
		}
	}

	if (s > 0)
	{
		sp[j] = (char *)malloc(sizeof(char) * (s + 1));
		if (sp[j] == NULL)
		{
			while (j >= 0)
			{
				free(sp[j]);
				j--;
			}
			free(sp);
			return (NULL);
		}

		for (k = 0; k < s; k++)
		{
			sp[j][k] = str[i - s + k];
		}
		sp[j][k] = '\0';
		j++;
	}

	sp[j] = NULL;
	return (sp);
}

/**
 * num_words - Counts the number of words in a string.
 * @str: Input string to count words from.
 *
 * Return: The number of words in the string.
 *
 * This function calculates the number of words in the given input string by
 * counting the sequences of non-space characters separated by spaces. It
 * returns the total word count.
 */

int num_words(char *str)
{
	int i = 0, words = 0;

	while (str[i])
	{
		if (str[i] != ' ')
		{
			words++;
			while (str[i] && str[i] != ' ')
			{
				i++;
			}
		}
		else
		{
			i++;
		}
	}

	return (words);
}

