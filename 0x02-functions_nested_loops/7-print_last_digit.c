#include <stdio.h>
#include <stdlib.h>
#include <main.h>


/**
 * print_last_digit - Prints the last digit of a number.
 * @num: The number to extract the last digit from.
 *
 * Return: The last digit of the number.
 */

int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;

	if (num < 0)
	{
		last_digit *= -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
