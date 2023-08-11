#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * printing single digit numbers from 0 to 9 using putchar
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

