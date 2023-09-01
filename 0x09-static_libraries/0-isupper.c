#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isupper - checks if a character is an uppercase letter
 * @c: character for checking
 *
 * Return: if uppercase 1 else 0
 */

int _isupper(int c)
{
	char start = 'A';
	char end = 'Z';
	int i;

	for (i = start; i <= end; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
