#include <stdio.h>
#include <stdlib.h>


/**
 * main - Entry point of the program.
 *
 * This program calculates the sum of even-valued terms
 *				in the Fibonacci sequence
 * that do not exceed 4,000,000 and prints the result followed by a newline.
 *
 * Return: 0
 */
int main(void)
{
	int prev_num = 1;
	int curr_num = 2;
	int even_sum = 0;
	int next_num;

	while (curr_num <= 4000000)
	{
		if (curr_num % 2 == 0)
		{
			even_sum += curr_num;
		}
		next_num = prev_num + curr_num;
		prev_num = curr_num;
		curr_num = next_num;
	}
	printf("%d", even_sum);
}

