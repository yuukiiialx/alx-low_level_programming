#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * prints the alphabet in lowercase from a to z
 *
 *
 *
 * Return: 0
 */
int main(void)
{
	char letter = 'a';

	do {
		putchar(letter);

		letter++;

	} while (letter <= 'z');

		putchar('\n');

	return (0);
}

