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
	for (int i = 0; i < n; i++)
	{
		if (n == 0 || n < 0)
		{
			_putchar('\n');
		}
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
}
