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
	int signal = 1;
	int result = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			signal *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			int digit = s[i] - '0';

			result = result * 10 + digit;
		}
		else if (result > 0)
		{
			break;
		}
	}

	return (result * signal);
}

