#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);


/**
 * find_len - Calculates the length of a string.
 *
 * This function calculates the length of the input string `str` by iterating
 * through it until it reaches the null terminator.
 *
 * @str: The input string.
 *
 * Return: The length of the string.
 */


int find_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}


/**
 * create_xarray - Creates an array of 'x' characters.
 *
 * This function dynamically allocates memory to create an array of 'x'
 * characters of the specified `size`.
 *
 * @size: The size of the array to be created.
 *
 * Return: A dynamically allocated array of 'x' characters.
 */

char *create_xarray(int size)
{
	char *array;
	int index;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for (index = 0; index < (size - 1); index++)
		array[index] = 'x';

	array[index] = '\0';

	return (array);
}



/**
 * iterate_zeroes - Skips leading '0' characters in a string.
 *
 * This function skips any leading '0' characters in the input string `str`
 * and returns a pointer to the first non-'0' character in the string.
 *
 * @str: The input string.
 *
 * Return: A pointer to the first non-'0' character in the string.
 */

char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * get_digit - Converts a character to an integer digit.
 *
 * This function converts a character `c` representing a digit to its
 * equivalent integer value.
 *
 * @c: The character to convert.
 *
 * Return: The integer equivalent of the character.
 */


int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digit);
}


/**
 * get_prod - Computes the product of a digit and a string.
 *
 * This function computes the product of a single-digit `digit` and a string
 * `mult`. The result is stored in the `prod` buffer with trailing zeroes as
 * specified by the `zeroes` parameter.
 *
 * @prod: The buffer to store the product.
 * @mult: The string to be multiplied.
 * @digit: The digit to multiply with.
 * @zeroes: The number of trailing zeroes to append.
 */


void get_prod(char *prod, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = find_len(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*prod = (tens % 10) + '0';
}


/**
 * add_nums - Adds two numbers represented as strings.
 *
 * This function adds two numbers represented as strings `final_prod` and
 * `next_prod` and stores the result in `final_prod`. The `next_len`
 * parameter specifies the length of the `next_prod` string.
 *
 * @final_prod: The buffer to store the result.
 * @next_prod: The number to be added to final_prod.
 * @next_len: The length of the next_prod string.
 */

void add_nums(char *final_prod, char *next_prod, int next_len)
{
	int num, tens = 0;

	while (*(final_prod + 1))
		final_prod++;

	while (*(next_prod + 1))
		next_prod++;

	for (; *final_prod != 'x'; final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		next_prod--;
		next_len--;
	}

	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		num = (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		final_prod--;
		next_prod--;
	}

	if (tens)
		*final_prod = (tens % 10) + '0';
}


/**
 * main - Entry point for a program that multiplies two numbers
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Description:
 * This function is the entry point for a program that multiplies two numbers
 * represented as strings. It takes two command-line arguments, each of which
 * should be a non-negative integer in string format. The program then
 * multiplies these two numbers and prints the result to the standard output.
 *
 * If the input arguments are invalid (not two arguments, contain a '0' as the
 * first character, or are empty strings), the program will print an error
 * message and exit with status code 98.
 *
 * The program uses helper functions such as 'iterate_zeroes', 'find_len',
 * 'create_xarray', 'get_digit', 'get_prod', and 'add_nums' to perform the
 * multiplication and manage the intermediate results.
 *
 * Return: 0 on success, or exit with status code 98 on error.
 */

int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int size, index, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = iterate_zeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = find_len(argv[1]) + find_len(argv[2]);
	final_prod = create_xarray(size + 1);
	next_prod = create_xarray(size + 1);

	for (index = find_len(argv[2]) - 1; index >= 0; index--)
	{
		digit = get_digit(*(argv[2] + index));
		get_prod(next_prod, argv[1], digit, zeroes++);
		add_nums(final_prod, next_prod, size - 1);
	}
	for (index = 0; final_prod[index]; index++)
	{
		if (final_prod[index] != 'x')
			putchar(final_prod[index]);
	}
	putchar('\n');

	free(next_prod);
	free(final_prod);

	return (0);
}
