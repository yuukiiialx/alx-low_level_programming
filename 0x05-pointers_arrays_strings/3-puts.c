#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * _puts - Prints a string followed by a newline.
 * @str: Pointer to the input string.
 *
 * Description: This function takes a pointer to a null-terminated string
 * and prints its characters followed by a newline using the _putchar function.
 */

void _puts(char *str)
{
	int i, length;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[length++]);
	}
	_putchar('\n');
}

