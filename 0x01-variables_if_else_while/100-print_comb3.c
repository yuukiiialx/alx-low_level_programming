#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all possible combinations of two digits using putchar()
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, f_digit, s_digit;

	for (i = 0; i < 100; i++)
	{
		f_digit = i % 10;
		s_digit = i / 10;

		if (f_digit > s_digit)
		{
			putchar(s_digit + '0');
			putchar(f_digit + '0');

			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
