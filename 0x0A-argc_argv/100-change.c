#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: An array of strings containing the command line arguments
 *
 * Description: This program calculates the minimum number of coins required
 * to make change for a given amount of cents.
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cents, coinc = 0, coinv[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	for (int i = 0; i < sizeof(coinv) / sizeof(coinv[0]); i++)
	{
		while (cents >= coinv[i])
		{
			cents -= coinv[i];
			coinc++;
		}
	}

	printf("%d\n", coinc);
	return (0);
}
