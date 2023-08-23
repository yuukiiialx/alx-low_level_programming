#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * infinite_add - Adds two numbers stored as strings
 * @n1: First number as a string
 * @n2: Second number as a string
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Description:
 *   This function takes two numbers represented
 *	 as strings and adds them together.
 *   The result is stored in a buffer provided by the caller.
 *   The size of the buffer is also provided by the caller.
 *   The function returns a pointer to
 *   the result string if the addition is successful,
 *   or 0 if the buffer is too small to store the result.
 *
 * Return: Pointer to the result string or 0 if buffer is too small
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len_n1 = get_string_length(n1);
	int len_n2 = get_string_length(n2);

	if (len_n1 == 0 || len_n2 == 0 || size_r <= len_n1 + 1)
	{
		return (0);
	}

	perform_addition(n1, n2, r, len_n1, len_n2);

	if (r[0] == '0')
	{
		reverse_string(r + 1, len_n1);
		return (r + 1);
	}
	else
	{
		reverse_string(r, len_n1);
		return (r);
	}
}

/**
 * get_string_length - Calculates the length of a string
 * @str: Input string
 *
 * Return: Length of the string
 */
int get_string_length(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * perform_addition - Performs addition of two numbers represented as strings
 * @n1: First number as a string
 * @n2: Second number as a string
 * @r: Buffer to store the result
 * @len_n1: Length of the first number string
 * @len_n2: Length of the second number string
 *
 * Return: None
 */
void perform_addition(char *n1, char *n2, char *r, int len_n1, int len_n2)
{
	int i, j, k, m, n, add = 0;

	r[len_n1 + 1] = '\0';
	len_n1--, len_n2--;

	for (i = len_n1, j = len_n2; i >= 0 || j >= 0 || add; i--, j--)
	{
		m = (i >= 0) ? n1[i] - '0' : 0;
		n = (j >= 0) ? n2[j] - '0' : 0;

		k = m + n + add;
		add = k / 10;

		r[len_n1 - i] = (k % 10) + '0';
	}
}

/**
 * reverse_string - Reverses a given string
 * @str: String to be reversed
 * @length: Length of the string
 *
 * Return: None
 */
void reverse_string(char *str, int length)
{
	int start = 0;
	int end = length - 1;

	while (start < end)
	{
		char temp = str[start];

		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

