#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * prints random number and telling if it is negative or positive or zero
 *
 *
 *
 * Return: 0
 */

int main (void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
	{
		printf("%d is Positive", n);
	}
	else if (n < 0)
	{
		printf("%d is Negative", n);
	}
	else
	{
		printf("%d is zero", n);
	}
	return (0);
}

