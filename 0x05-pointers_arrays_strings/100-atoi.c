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
	int sign = 1;
	int result = 0;
	int dig = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			if (dig)
				break;
			sign = -sign;
		}
		else if (s[i] == '+')
		{
			if (dig)
				break;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			dig = 1;
		}
		else if (dig)
		{
			break;
		}
		i++;
	}

	return (result * sign);
}
