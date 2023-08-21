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

	while (s[i] != '\0')
	{
		if (s[i] == '-' && result == 0)
			sign = -sign;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			int digit = s[i] - '0';
			int max_div10 = 214748364;

			if (result > max_div10 || (result == max_div10 && digit > 7))
				return ((sign == 1) ? 2147483647 : -2147483648);

			result = result * 10 + digit;
		}
		else if (result != 0)
			break;
		i++;
	}

	return (result * sign);
}

