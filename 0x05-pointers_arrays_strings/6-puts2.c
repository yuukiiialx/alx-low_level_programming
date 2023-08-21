#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * puts2 - Prints each character of a string on a new line.
 * @str: Pointer to the input string.
 *
 * Description: This function takes a pointer to a null-terminated string
 * and prints each individual character of the string
 *				on a new line using the putchar function.
 */

void puts2(char *str)
{
	int i, length;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		if (i % 2 != 0)
		{
			continue;
		}
		_putchar(str[i]);
	}
}

