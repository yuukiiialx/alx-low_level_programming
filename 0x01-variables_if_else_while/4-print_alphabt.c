#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * prints the alphabet in lowercase from a to z except q and e in uppercase
 *
 *
 *
 * Return: 0
 */
int main(void)
{
	char letters = 'a';

	do {
		if (letters == 'q' || letters == 'e')
	{
		putchar(toupper(letters));
	}
	else
	{
		putchar(letters);
	}
			letters++;
	} while (letters <= 'z');
			putchar('\n');
		return (0);
}

