#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isdigit - Checks if a number is a digit (0 through 9)
 * @c: number for checking
 *
 * Return: if 0 to 9 then 1 else 0
 */


int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
