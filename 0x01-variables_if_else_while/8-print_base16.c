#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * printing all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */


int main(void)
{
	int i = '0';
	char letter = 'a';

	do {
		putchar(i);
		i++;
	} while (i <= '9');
	do {
		putchar(letter);
		letter++;

	} while (letter <= 'f');
	putchar('\n');
	return (0);
}

