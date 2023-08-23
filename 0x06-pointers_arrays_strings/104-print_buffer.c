#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_buffer - Prints the contents of a buffer in a formatted manner
 * @b: Buffer to be printed
 * @size: Size of the buffer
 *
 * Description:
 *   This function prints the contents of a buffer in a formatted manner.
 *   The buffer is represented by a character array.
 *   The size of the buffer is provided by the caller.
 *   The function prints the hexadecimal representation
 *   of the buffer's contents,
 *   followed by the corresponding ASCII characters.
 *   Each line of output consists of 10 bytes of the buffer, along with their
 *   hexadecimal representation and ASCII characters.
 *   If the buffer is empty or the size is less than or equal to 0,
 *   a newline is printed.
 *
 * Return: None
 */
void print_buffer(char *b, int size)
{
	int byte;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ", byte);
		print_hex(b, size, byte);
		print_ascii(b, size, byte);

		if (byte >= size)
		{
			continue;
		}

		printf("\n");
	}

	if (size <= 0)
	{
		printf("\n");
	}
}

/**
 * print_hex - Prints the hexadecimal representation of a buffer
 * @b: Buffer to be printed
 * @size: Size of the buffer
 * @byte: Starting byte index for printing
 *
 * Return: None
 */
void print_hex(char *b, int size, int byte)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if ((i + byte) >= size)
		{
			printf("  ");
		}
		else
		{
			printf("%02x", *(b + i + byte));
		}

		if ((i % 2) != 0 && i != 0)
		{
			printf(" ");
		}
	}
}

/**
 * print_ascii - Prints the ASCII representation of a buffer
 * @b: Buffer to be printed
 * @size: Size of the buffer
 * @byte: Starting byte index for printing
 *
 * Return: None
 */
void print_ascii(char *b, int size, int byte)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if ((i + byte) >= size)
		{
			break;
		}
		else if (*(b + i + byte) >= 31 && *(b + i + byte) <= 126)
		{
			printf("%c", *(b + i + byte));
		}
		else
		{
			printf(".");
		}
	}
}

