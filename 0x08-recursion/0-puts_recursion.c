#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _puts_recursion - Prints a string using recursion.
 * @s: The string to be printed.
 *
 * Return: void.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
