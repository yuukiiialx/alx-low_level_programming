#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_diagonal - Prints a diagonal line in the terminal
 *				using the '\' character followed by a new line
 * @n: The length of the diagonal line to be printed
 *
 *
 * Description: If the input length is zero or less,
 *					only a new line is printed.
 *		The line is formed by repeating the '\' character horizontally
 *				with each repetition shifted one position down
 */

void print_diagonal(int n)
{
	int i;
	int s;

	for (i = 0; i < n; i++)
	{
		for (s = 0; s < i; s++)
		{
			_putchar(' ');
		}
		_putchar('\\');

		if (i == n - 1)
		{
			continue;
		}
			_putchar('\n');
	}
	_putchar('\n');
}
