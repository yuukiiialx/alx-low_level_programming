#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Description: This program implements the FizzBuzz game.
 *           It prints numbers from 1 to 100,
 *			replacing numbers divisible by 3 with "Fizz",
 *  numbers divisible by 5 with "Buzz",
 *				and numbers divisible by both 3 and 5 with "FizzBuzz".
 *
 * Return: 0
 */


int main(void)
{
	int i = 1;

	printf("%d", i);

	for (int i = 2; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}

