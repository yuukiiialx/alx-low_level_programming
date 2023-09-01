#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: An array of strings containing the command line arguments
 *
 * Description: This program takes command line arguments
 *				and calculates their sum.
 *				If no arguments are provided, it prints 0.
 *				If any argument is not a valid
 *				number, it prints an error message and returns 1.
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *c = argv[i];

		while (*c)
		{
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
			c++;
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

