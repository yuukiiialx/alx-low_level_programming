#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line.
 *
 * Description: Prints the alphabet in lowercase followed by new line
 *              using print_alphabet() function
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
		int letter
			;
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
}
