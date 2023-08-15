#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 *	print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 *		each followed by a new line.
 *
 *	This function iterates through the lowercase alphabet characters
 *				and prints them
 *		sequentially, repeating the process ten times.
 *			After each sequence of characters,
 *		newline character is printed to start a new line.
 *
 *
 *		Return: Always 0 (Success)
 */

int print_alphabet_x10(void)
{
		int letter, i;

		for (i = 0; i < 10; i++)
		{
			for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		}
}
