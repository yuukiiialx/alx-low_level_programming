#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * largest_number - finds the largest among three numbers
 * @num_one: first number
 * @num_two: second number
 * @num_three: third number
 *
 * Return: the largest number among the three
 */

int largest_number(num_one, num_two, num_three)
{
	int result = 0;

	if (num_one > num_two && num_one > num_three)
	{
		result = num_one;
	}
	else if (num_two > num_one && num_two > num_three)
	{
		result = num_two;
	}
	else
	{
		result = num_three;
	}
	return (result);
}
