#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * read_textfile - Reads and prints the contents of a text file to stdout.
 * @filename: The name of the file to be read.
 * @letters: The maximum number of letters to read and print.
 *
 * Return: If successful, returns the number of letters read and printed.
 *         If an error occurs, returns -1, or 0 if filename is NULL.
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t fpRead, fpWrite, fpClose;
	char *lineBuffer;

	if (filename == NULL)
		return (0);

	lineBuffer = malloc(sizeof(char) * letters);

	if (lineBuffer == NULL)
		return (-1);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	fpRead = read(fp, lineBuffer, letters);

	if (fpRead == -1)
		return (-1);

	fpWrite = write(STDOUT_FILENO, lineBuffer, fpRead);

	if (fpWrite == -1)
		return (-1);
	fpClose = close(fp);

	if (fpClose == -1)
		return (-1);

	return (fpRead);
}

