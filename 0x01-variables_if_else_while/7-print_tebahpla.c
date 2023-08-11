#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * printing alphabets from 'z' to 'a' using putchar
 *
 * Return: Always 0
 */

int main(void)
{
char letter = 'z';


do {
	putchar(letter);
	letter--;
}	while (letter >= 'a');
	putchar('\n');

	return (0);
}


