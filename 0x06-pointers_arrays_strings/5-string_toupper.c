#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_toupper - Converts a string to uppercase.
 *
 * This function takes a string as input and converts
 * all lowercase letters in the string to uppercase.
 * It iterates over each character in the string using
 * a for loop and checks if the character is a lowercase letter.
 * If it is, the character is converted to uppercase
 * by subtracting 32 from its ASCII value.
 * The modified string is then returned.
 *
 * @s: Pointer to the string to be converted.
 * Return: Pointer to the modified string.
 */



char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}
