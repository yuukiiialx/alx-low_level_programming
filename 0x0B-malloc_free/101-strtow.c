#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "main.h"

/**
 * count_words - Counts the number of words in a string.
 * @str: Input string to count words from.
 *
 * Return: The number of words in the string.
 */
static int count_words(char *str);

/**
 * copy_word - Copies a word from the input string to a new buffer.
 * @start: Pointer to the start of the word in the input string.
 *
 * Return: A newly allocated buffer containing the copied word.
 */
static char *copy_word(char *start);
/**
 * strtow - Splits a string into words.
 * @str: Input string to be split.
 *
 * Return: Double pointer to an array of strings or NULL on error.
 */
char **strtow(char *str)
{
	int i;

	if (str == NULL || *str == '\0')
		return (NULL);

	int num_words = count_words(str);

	if (num_words == 0)
		return (NULL);

	char **words = (char **)malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	int word_index = 0;
	bool in_word = false;
	char *word_start = NULL;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			if (!in_word)
			{
				in_word = true;
				word_start = str + i;
			}
		}
		else if (in_word)
		{
			in_word = false;
			words[word_index++] = copy_word(word_start);
		}
	}

	if (in_word)
		words[word_index++] = copy_word(word_start);

	words[word_index] = NULL;
	return (words);
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string to count words in.
 *
 * Return: The number of words in the string.
 *
 * This function iterates through the input string
 *		and counts the number of words
 * based on spaces as word separators.
 *			It returns the count of words found in the string.
 */

static int count_words(char *str)
{
	int count = 0;
	bool in_word = false;

	for (int i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			if (!in_word)
			{
				in_word = true;
				count++;
			}
		}
		else
		{
			in_word = false;
		}
	}

	return (count);
}

/**
 * copy_word - Copies a word from the given start position.
 * @start: Pointer to the start of the word.
 *
 * Return: A dynamically allocated string containing the copied word,
 *      or NULL on memory allocation failure.
 * This function copies a word from the input string starting at the specified
 * position until a space or the end of the string
 *				is encountered. It dynamically
 * allocates memory for the copied word and returns it.
 */

static char *copy_word(char *start)
{
	int i;
	int word_length = 0;

	while (start[word_length] && start[word_length] != ' ')
	{
		word_length++;
	}
	char *word = (char *)malloc((word_length + 1) * sizeof(char));

	if (word == NULL)
		return (NULL);

	for (i = 0; i < word_length; i++)
	{
		word[i] = start[i];
	}
	word[word_length] = '\0';

	return (word);
}

