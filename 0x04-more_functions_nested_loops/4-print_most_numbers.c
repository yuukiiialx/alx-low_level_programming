#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 followed by
 *			a newline except 2 and 4
 *
 *
 *	Return: none
 */


void print_most_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar('0' + i);
	}
	_putchar('\n');
}
