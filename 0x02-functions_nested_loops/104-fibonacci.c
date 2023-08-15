#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the first 98 Fibonacci numbers and
 *          calculates the sum of the even numbers
 *
 * Return: 0
 */
int main(void)
{
	unsigned long prev_num = 1;
	unsigned long curr_num = 2;
	unsigned long even_sum = 0;
	unsigned long next_num;
	int count = 2;

	printf("%llu", prev_num);
	printf(", %llu", curr_num);

	while (count < 98)
	{
		next_num = prev_num + curr_num;
		if (next_num % 2 == 0)
		{
			even_sum += next_num;
		}

		printf(", %llu", next_num);

		prev_num = curr_num;
		curr_num = next_num;
		count++;
	}

	printf("\n");

	return (0);
}
