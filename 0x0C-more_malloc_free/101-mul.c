#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * larger_num - Compare two numbers as strings
 *
 * Description: This function compares two numbers represented as strings.
 * It considers the length of the strings and the individual characters to
 * determine which number is larger.
 *
 * @number_one: The first number as a string
 * @number_two: The second number as a string
 *
 * Return:
 * - 1 if number_one is larger
 * - 2 if number_two is larger
 * - Recursively calls itself with incremented pointers if numbers are equal
 */

int larger_num(char *number_one, char *number_two)
{
	int length_number_one, length_number_two;

	length_number_one = strlen(number_one);
	length_number_two = strlen(number_two);

	if (length_number_one > length_number_two)
		return (1);
	else if (length_number_one < length_number_two)
		return (2);
	else if ((*number_one == '\0') && (*number_two == '\0'))
	{
		return (1);
	}
	else if ((*number_one != '\0') && (*number_two != '\0'))
	{
		if (*number_one >= *number_two)
			return (1);
		if (*number_one < *number_two)
			return (2);
	}
	return ((larger_num(number_one++, number_two++)));
}

/**
 * is_number - Check if a string represents a valid number
 *
 * Description: This function checks if a given string represents a valid
 * number. It examines each character in the string to determine if it falls
 * within the '0' to '9' range, indicating a valid digit.
 *
 * @number: The string to be checked
 *
 * Return:
 * - 1 if the string represents a valid number
 * - 0 if the string does not represent a valid number
 */

int is_number(char *number)
{
	while (*number)
	{
		if (!((*number >= '0') && (*number <= '9')))
			return (0);
		number++;
	}
	return (1);
}

/**
 * mul_number - Multiply two numbers represented as strings
 *
 * Description: This function is intended to multiply two numbers
 * represented as strings. It takes two string arguments, `number_one`
 * and `number_two`, and performs the multiplication operation.
 *
 * @number_one: The first number as a string
 * @number_two: The second number as a string
 *
 * Return: NULL (Currently unimplemented)
 */

char *mul_number(char *number_one, char *number_two)
{
	char **ver;

	(void) ver;
	(void) number_one;
	(void) number_two;
	return (NULL);
}

/**
 * main - Entry point of the program
 *
 * Description: This is the main function that serves as the entry point
 * for the program. It performs the following tasks:
 * 1. Checks the command-line arguments and ensures there are exactly 3.
 * 2. Verifies if both command-line arguments are valid numbers.
 * 3. Determines which of the two numbers is larger.
 * 4. Calls a multiplication function accordingly.
 * 5. Prints the result of the multiplication to the standard output.
 *
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the command-line arguments
 *
 * Return: 0 for success, 98 for errors in command-line
 *			arguments or number validity
 */

int main(int argc, char *argv[])
{
	int larger, isNumbers;
	char *total;

	(void) total;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	isNumbers = is_number(argv[1]) +  is_number(argv[1]);
	if (isNumbers != 2)
	{
		printf("Error\n");
		exit(98);
	}
	larger = larger_num(argv[1], argv[2]);

	if (larger == 1)
		total = mul_number(argv[1], argv[2]);
	else
		total = mul_number(argv[2], argv[1]);

	printf("%lu\n", (atol(argv[1]) * atol(argv[2])));
	return (0);
}
