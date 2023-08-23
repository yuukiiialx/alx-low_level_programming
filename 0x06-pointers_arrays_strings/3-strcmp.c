#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * Description: This function compares the two strings, s1 and s2, and returns
 *  an integer value based on the comparison result. The return
 *  value is zero if the strings are equal. If the strings are not
 *  equal, the return value is the difference between the ASCII
 *  values of the first differing characters in the strings.
 *
 * Return: An integer less than, equal to, or greater than zero if s1 is found,
 *         respectively, to be less than, to match, or be greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
