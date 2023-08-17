#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9 followed by a newline
 *
 *
 *
 * Return: none
 */


void print_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
