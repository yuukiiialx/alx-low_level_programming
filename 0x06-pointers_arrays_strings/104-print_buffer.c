#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_buffer - Prints the contents of a buffer in a formatted manner.
 * @b: Pointer to the buffer.
 * @size: Size of the buffer.
 *
 * Description: This function displays the memory addresses, hexadecimal values
 *            and corresponding ASCII characters for each group of 10 bytes in
 *            the buffer. If the buffer size is less than or equal to zero, it
 *            prints a new line.
 */

void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if ((j + i) >= size)
				printf("  ");

			else
				printf("%02x", *(b + j + i));

			if ((j % 2) != 0 && j != 0)
				printf(" ");
		}

		for (j = 0; j < 10; j++)
		{
			if ((j + i) >= size)
				break;

			else if (*(b + j + i) >= 31 &&
				 *(b + j + i) <= 126)
				printf("%c", *(b + j + i));

			else
				printf(".");
		}

		if (i >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
