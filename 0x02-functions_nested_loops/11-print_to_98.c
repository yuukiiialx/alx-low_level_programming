#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * print_to_98 - Prints a sequence of numbers from a given number to 98.
 *
 * This function prints a sequence of numbers starting from the input 'num'
 * and proceeding towards the value 98. It takes into account whether 'num'
 * is greater than or less than 98 and prints the numbers in the appropriate
 * direction, separated by commas and followed by a newline character.
 *
 * @num: The starting number for the sequence.
 *
 * Return: None (void)
 */

int print_to_98(num)
{
	int i;

	if (num <= 98)
	{
		for (i = num; i <= 98; i++)
		{
			printf("%d", i);

			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = num; i >= 98; i--)
		{
			printf("%d", i);

			if (i != 98)
			{
				printf(", ");
			}
		}
	}

	printf("\n");
}
