#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome using recursion.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int len = find_strlen(s);

	return (check_palindrome(s, len, 0));
}


/**
 * find_strlen - Helper function to find the length of a string recursively.
 * @s: The string to find the length of.
 *
 * Return: The length of the string.
 */

int find_strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + find_strlen(s + 1));
}


/**
 * check_palindrome - Helper function to check if a string is a
 *		palindrome recursively.
 * @s: The string to check.
 * @len: The length of the string.
 * @index: The current index to compare characters.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int check_palindrome(char *s, int len, int index)
{
	if (index >= len / 2)
	{
		return (1);
	}

	if (s[index] != s[len - index - 1])
	{
		return (0);
	}

	return (check_palindrome(s, len, index + 1));
}

