#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Description: This function takes a string @s and converts it to an integer.
 *              It processes characters until a non-digit character is
 *              encountered after digits have been processed. The final
 *              integer value is multiplied by the sign based on the presence
 *              of '-' in the string.
 *
 * Return: The converted integer value.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int n = 0;

	do {
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			n = (n * 10) + (*s - '0');
		}
		else if (n > 0)
		{
			break;
		}
	} while (*s++);

	return (n * sign);
}
