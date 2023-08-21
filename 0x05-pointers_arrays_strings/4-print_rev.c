#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a newline.
 * @s: Pointer to the input string.
 *
 * Description: This function takes a pointer to a null-terminated string
 * and prints its characters in reverse order followed by a newline
 * using the putchar function.
 */

void print_rev(char *s)
{
	int i, j, length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

