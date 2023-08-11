#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints combination of all three digit numbers
 *                      using putchar() function
 *
 * Return: Always 0
 */

int main (void)
{
	int f_digit, s_digit ,t_digit;

	for (int i = 0; i < 1000; i++)
	{
		f_digit = i % 10;
		s_digit = (i / 10) % 10;
		t_digit = i / 100;

		if (f_digit > s_digit && t_digit < s_digit)
		{
			putchar(t_digit + '0');
			putchar(s_digit + '0');
			putchar(f_digit + '0');

			if (i < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}

