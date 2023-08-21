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
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] == ' ' || (s[i] >= '\t' && s[i] <= '\r'))
		i++;

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		int digit = s[i] - '0';

		if (result > (2147483647 - digit) / 10)
		{
			return ((sign == 1) ? 2147483647 : -2147483648);
		}

		result = result * 10 + digit;
		i++;
	}

	return (result * sign);
}

