#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point of the program.
 *
 * This program prints each character of the "name" string using the
 * _putchar function and then adds a newline character to the output.
 *
 * Return: 0
 */

int main(void)
{
	char name[] = "_putchar";
	int i, length = 0;

	for (i = 0; name[i] != '\0'; i++)
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');
	return (0);
}

