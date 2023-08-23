#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * leet - Converts a string to leet (1337) language
 * @str: String to be converted
 *
 * Description:
 * This function takes a string and converts it to leet (1337) language.
 * The conversion is done by replacing certain characters
 * with their corresponding
 * leet characters or numbers.
 * The leet characters and their corresponding replacements are defined in the
 * 'leet' array.
 * The function iterates through each character in the string and checks if it
 * matches any character in the 'leet' array.
 * If a match is found, the character in the string is replaced with the
 * corresponding leet character or number.
 * The modified string is then returned.
 *
 * Return: Pointer to the modified string
 *
 */

char *leet(char *str)
{
	int i = 0;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
		int j = 0;

		do {
			if (str[i] == leet[j] || str[i] - 32 == leet[j])
			{
				str[i] = j + '0';
			}
			j++;
		} while (j <= 7);

		i++;
	}

	return (str);
}
