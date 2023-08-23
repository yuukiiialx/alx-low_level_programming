#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * rot13 - Encodes a string using the ROT13 cipher.
 * @s: The string to be encoded.
 *  Description:
 *   This function takes a string and applies the ROT13 cipher to encode it.
 *   It replaces each letter with the letter 13 places ahead in the alphabet.
 *   The function modifies the original string and returns a pointer to the
 *   encoded string.
 *
 * Return: Pointer to the encoded string.
 */



char *rot13(char *s)
{
	int res = 0, i;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	do {
		for (i = 0; i < 52; i++)
		{
			if (*(s + res) == letters[i])
			{
				*(s + res) = rot[i];
				break;
			}
		}
		res++;
	} while (*(s + res) != '\0');

	return (s);
}
