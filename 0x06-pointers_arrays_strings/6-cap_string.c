#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string,
 * considering specific delimiters.
 *
 * This function iterates through the input string and
 * capitalizes the first letter of each word
 * after certain delimiters like space, tab, newline,
 * comma, semicolon, period, exclamation mark,
 * question mark, double quotation mark, open parenthesis,
 * close parenthesis, open curly brace,
 * close curly brace, and beginning of the string.
 *
 * @str: The input string to be capitalized.
 * Return: A pointer to the modified string with capitalized words.
 */


char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;

		if (str[i - 1] == ' ' ||
			str[i - 1] == '\t' ||
			str[i - 1] == '\n' ||
			str[i - 1] == ',' ||
			str[i - 1] == ';' ||
			str[i - 1] == '.' ||
			str[i - 1] == '!' ||
			str[i - 1] == '?' ||
			str[i - 1] == '"' ||
			str[i - 1] == '(' ||
			str[i - 1] == ')' ||
			str[i - 1] == '{' ||
			str[i - 1] == '}' ||
			i == 0)
			str[i] -= 32;

		i++;
	}

	return (str);
}
