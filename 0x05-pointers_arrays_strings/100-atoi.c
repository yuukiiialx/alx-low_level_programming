#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer value
 */
int _atoi(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= '0' && s[i] <= '9') ||
		(s[i] == '-' && s[i + 1] >= '0' && s[i + 1] <= '9'))
		{
			_putchar(s[i]);
		}
		i++;
	}

	_putchar('\n');

	return (0);
}
