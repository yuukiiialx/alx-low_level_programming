#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * printing single digit numbers using putchar
 *
 * Return: Always 0
 */


int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}


