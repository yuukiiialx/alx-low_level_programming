#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * puts_half - Prints the second half of a string on a new line.
 * @str: Pointer to the input string.
 *
 * Description: This function calculates the length of the input string
 * and then prints the second half of the string, starting from the middle,
 * on separate lines using the putchar function.
 */
void puts_half(char *str)
{
	int i, length = 0;
	int start;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	start = length / 2;

	if (length % 2 != 0)
	{
		start++;
	}

	for (i = start; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
