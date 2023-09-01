#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Description: This program takes two command line arguments
 *			and multiplies them together.
 * If the number of arguments is not equal to 3,
 *			an error message is printed and the program
 * returns 1. Otherwise, it converts the arguments
 *			to integers using the atoi function,
 * performs the multiplication, and prints the result.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
