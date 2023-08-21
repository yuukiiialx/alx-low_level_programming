#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: Pointer to the null-terminated string to be reversed.
 *
 * This function takes a pointer to a null-terminated string and reverses
 * its characters in place using a two-pointer swapping technique. The reversal
 * is performed by swapping characters from the beginning and end of the string
 * towards the middle until they meet.
 *
 * @s: The input string to be reversed.
 */


void rev_string(char *s)
{
	int i, j, length = 0;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}

