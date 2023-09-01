#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - Calculates the length of a string
 *
 * This function computes the length of the given string by iterating
 * through its characters until the null terminator is encountered
 *
 * @s: The input string whose length is to be calculated
 *
 * Return: The length of the string
 */


int _strlen(char *s)
{
	int i, length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}

