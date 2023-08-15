#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * _abs - Computes the absolute value of a number
 * @num: The number to compute absolute value for
 *
 * Return: The absolute value of the number
 */

int _abs(int num)
{
	if (num < 0)
	{
		return (num * -1);
	}
	else
	{
		return (num);
	}
	_putchar('\n');
}
