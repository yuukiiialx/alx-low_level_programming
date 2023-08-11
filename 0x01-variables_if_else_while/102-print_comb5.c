#include <stdio.h>
#include <stdlib.h>


/**
 * main - Prints all possible combinations of two-digit numbers
 *        in ascending order using putchar() function
 *
 * Return: Always 0
 */

int main(void)
{
	int i, f_digit, s_digit, ff_digit, ss_digit;

	for (i = 0; i < 100; i++)
	{
		f_digit = i % 10;
		s_digit = i / 10;

		for (int j = i; j < 100; j++)
		{
			ff_digit = j % 10;
			ss_digit = j / 10;

			if (s_digit < ss_digit)
			{
				putchar(s_digit + '0');
				putchar(f_digit + '0');
				putchar(32);
				putchar(ss_digit + '0');
				putchar(ff_digit + '0');

				if (i < 99 || j < 99)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

