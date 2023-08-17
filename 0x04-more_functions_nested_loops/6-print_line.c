#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_line - Prints a straight line in the terminal using the character "_"
 *              followed by a new line
 * @n: The length of the line to be printed
 *
 *
 * Description: If the input length is zero or less only a new line is printed
 *
 *
 * Return: none
 */
void print_line(int n)
{
	for (int i = 0; i < n; i++)
	{
		if (n == 0 || n < 0)
		{
			_putchar('\n');
		}
		_putchar(95);
	}
	_putchar('\n');
}
