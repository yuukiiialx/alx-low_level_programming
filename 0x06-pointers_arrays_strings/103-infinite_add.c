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
 *   This function takes two numbers represented as
 *	 strings and adds them together.
 *   The result is stored in a buffer provided by the caller.
 *   The size of the buffer is also provided by the caller.
 *   The function returns a pointer to the result string
 *	 if the addition is successful,
 *   or 0 if the buffer is too small to store the result.
 *
 * Return: Pointer to the result string or 0 if buffer is too small
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, l, m, m2, add = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	if (i >= j)
		l = i;
	else
		l = j;
	if (size_r <= l + 1)
		return (0);
	r[l + 1] = '\0';
	i--, j--, size_r--;
	m = *(n1 + i) - 48, m2 = *(n2 + j) - 48;
	while (l >= 0)
	{
		k = m + m2 + add;
		if (k >= 10)
			add = k / 10;
		else
			add = 0;
		if (k > 0)
		*(r + l) = (k % 10) + 48;
		else
			*(r + l) = '0';
		if (i > 0)
			i--, m = *(n1 + i) - 48;
		else
			m = 0;
		if (j > 0)
			j--, m2 = *(n2 + j) - 48;
		else
			m2 = 0;
		l--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
