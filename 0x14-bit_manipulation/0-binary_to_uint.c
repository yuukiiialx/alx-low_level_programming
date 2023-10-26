#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - Convert a binary string to an unsigned int.
 * @b: Pointer to the binary string (0 and 1 characters).
 *
 * Return: The converted unsigned int, or 0 if an error occurs.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = (result << 1) | (b[i] - '0');
		i++;
	}

	return (result);
}


