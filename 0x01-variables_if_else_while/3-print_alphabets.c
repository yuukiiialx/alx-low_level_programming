#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * prints the alphabet in lowercase from a to z then in uppercase
 *
 *
 *
 * Return: 0
 */
int main(void)
{
	char letter_lower = 'a';
	char letter_upper = 'A';

do {
	putchar(letter_lower);
	letter_lower++;
} while (letter_lower <= 'z');

do {
	putchar(letter_upper);
	letter_upper++;
} while (letter_upper <= 'Z');
	putchar('\n');
	return (0);
}

