#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 *
 * Description: Prints numbers from 00 to 99 using putchar.
 * Each number is separated by a comma and a space, except for the last one.
 *
 * Return: Always 0
 */
int main(void)
{
	int digit, double_digit;

	for (digit = 0; digit <= 9; digit++)
	{
		for (double_digit = 0; double_digit <= 9; double_digit++)
		{
			putchar(digit + '0');
			putchar(double_digit + '0');

			if (!(digit == 9 && double_digit == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}

