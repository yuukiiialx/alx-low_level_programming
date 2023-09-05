#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_space - Checks if a character is a whitespace character.
 * @c: The character to check.
 *
 * Return: 1 if the character is a whitespace character, 0 otherwise.
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int count = 0;
	int is_word = 0;

	while (*str)
	{
		if (is_space(*str))
		{
			is_word = 0;
		}
		else if (!is_word)
		{
			is_word = 1;
			count++;
		}
		str++;
	}

	return (count);
}

/**
 * extract_word - Extracts a word from a string.
 * @str: The input string.
 *
 * Return: A dynamically allocated string containing the word.
 */
char *extract_word(char *str)
{
	int word_len = 0;
	char *start = str;

	while (*str && !is_space(*str))
	{
		word_len++;
		str++;
	}

	char *word = (char *)malloc((word_len + 1) * sizeof(char));

	if (word == NULL)
	{
		return (NULL);
	}

	for (int j = 0; j < word_len; j++)
	{
		word[j] = start[j];
	}
	word[word_len] = '\0';

	return (word);
}

/**
 * free_str_array - Frees the memory allocated for an array of strings.
 * @str_arr: The array of strings to free.
 * @count: The number of strings in the array.
 */
void free_str_array(char **str_arr, int count)
{
	int i;

	if (str_arr)
	{
		for (i = 0; i < count; i++)
		{
			free(str_arr[i]);
		}
		free(str_arr);
	}
}

/**
 * strtow - Splits a string into words based on spaces, tabs, and newlines.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	int num_words = count_words(str);
	char **result = (char **)malloc((num_words + 1) * sizeof(char *));

	if (result == NULL)
	{
		return (NULL);
	}

	int i = 0;

	while (*str)
	{
		while (is_space(*str))
		{
			str++;
		}

		if (*str == '\0')
		{
			break;
		}

		result[i] = extract_word(str);
		if (result[i] == NULL)
		{
			free_str_array(result, i);
			return (NULL);
		}

		i++;
	}

	result[i] = NULL;
	return (result);
}

