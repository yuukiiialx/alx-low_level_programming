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
	int coins = 0, sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	sum = atoi(argv[1]);

	if (sum < 0)
	{
		printf("0\n");
		return (0);
	}

	int coin_values[] = {25, 10, 5, 2, 1};
	int i;

	for (i = 0; i < sizeof(coin_values) / sizeof(coin_values[0]); i++)
	{
		while (sum / coin_values[i])
		{
			sum -= coin_values[i];
			coins++;
		}
	}

	printf("%d\n", coins);
	return (0);
}

