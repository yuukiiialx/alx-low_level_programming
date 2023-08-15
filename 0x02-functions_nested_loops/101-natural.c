#include <stdio.h>
#include <stdlib.h>


/**
 * main - Entry point of the program.
 *
 * This program calculates the sum of all the natural numbers below 1024
 * that are multiples of either 3 or 5 and
 *		then prints the result followed by a newline.
 *
 * Return: 0
 */
int main(void)
{
	int i, result;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			result += i;
		}
	}
	printf("%d", result);

	printf("\n");

	return (0);
}


