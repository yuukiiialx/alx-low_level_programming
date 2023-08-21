#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program.
 *
 * Description: This program generates a random password that consists of
 * ASCII characters within the range of '!' (33) to '~' (126), and prints it.
 *
 * Return: 0
 */

int main(void)
{
	char pass[14];
	int i;

	srand(time(NULL));

	for (i = 0; i < 13; i++)
	{

		pass[i] = rand() % 94 + 33;
	}
	pass[13] = '\0';

	printf("%s\n", pass);

	return (0);
}

