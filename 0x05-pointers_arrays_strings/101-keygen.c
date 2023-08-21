#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program generates a sequence of characters based on random
 * numbers and accumulates them until the accumulated value reaches 2772.
 * It then calculates the difference between 2772 and the accumulated value
 * and prints the characters accordingly.
 *
 * Return: 0
 */

int main(void)
{
	int n;
	char c;

	srand(time(NULL));
	while (n <= 2645)
	{
		c = rand() % 128;
		n += c;
		putchar(c);
	}
	putchar(2772 - n);
	return (0);
}

