#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 *
 * This program generates and prints a Fibonacci sequence up to a certain limit
 * It starts with two initial values, previousFibonacci(1) and nextFibonacci(2)
 * It then calculates the next Fibonacci number by adding
 *							the previous two numbers
 * The sequence is printed using printf until reaching the limit of 91 terms
 * After that, it continues printing the remaining terms in a modified format
 *
 * Return: Always 0
 */


int main(void)
{
	unsigned long currentFibonacci, previousFibonacci, nextFibonacci;
	unsigned long previousFibonacci1, previousFibonacci2, nextFibonacci1;
	unsigned long nextFibonacci2;

	previousFibonacci = 1;
	nextFibonacci = 2;

	printf("%lu", previousFibonacci);

	for (currentFibonacci = 1; currentFibonacci < 91; currentFibonacci++)
	{
		printf(", %lu", nextFibonacci);
		nextFibonacci = nextFibonacci + previousFibonacci;
		previousFibonacci = nextFibonacci - previousFibonacci;
	}

	previousFibonacci1 = previousFibonacci / 1000000000;
	previousFibonacci2 = previousFibonacci % 1000000000;
	nextFibonacci1 = nextFibonacci / 1000000000;
	nextFibonacci2 = nextFibonacci % 1000000000;

	for (currentFibonacci = 92; currentFibonacci < 99; currentFibonacci++)
	{
		printf(", %lu", nextFibonacci1 + (nextFibonacci2 / 1000000000));
		printf("%lu", nextFibonacci2 % 1000000000);
		nextFibonacci1 = nextFibonacci1 + previousFibonacci1;
		previousFibonacci1 = nextFibonacci1 - previousFibonacci1;
		nextFibonacci2 = nextFibonacci2 + previousFibonacci2;
		previousFibonacci2 = nextFibonacci2 - previousFibonacci2;
	}

	printf("\n");

	return (0);
}
