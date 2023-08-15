#include <stdio.h>
#include <stdlib.h>
#include <main.h>

/**
 * main - Entry point of the program.
 *
 * This function is the entry point for the program execution. It initializes
 * variables 'x' and 'y' with initial values, then calculates the Fibonacci
 * sequence by adding 'x' and 'y' to generate 'z'. The first 50 numbers of the
 * Fibonacci sequence are printed, separated by commas, followed by a newline.
 *
 * Return: 0
 */

int main(void)
{
	long int x, y, z;
	int i;

	x = 1;
	y = 2;

	printf("%ld, %ld", x, y);
	for (i = 0; i < 48; i++)
	{
		z = x + y;
		printf(", %ld", z);
		x = y;
		y = z;
	}
	printf("\n");

	return (0);
}
