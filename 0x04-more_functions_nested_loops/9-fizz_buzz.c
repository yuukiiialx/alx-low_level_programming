#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Description: This program implements the FizzBuzz game.
 *           It prints numbers from 1 to 100,
 *			replacing numbers divisible by 3 with "Fizz",
 *		numbers divisible by 5 with "Buzz",
 *				and numbers divisible by both 3 and 5 with "FizzBuzz".
 *
 * Return: 0
 */


int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz\n");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz\n");
		}
		else
		{
			printf("%d\n", i);
		}
	}
	printf("\n");
	return (0);
}

