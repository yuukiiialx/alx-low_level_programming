#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * create_file - Creates a new file with the given text content.
 * @filename: The name of the file to be created or overwritten.
 * @text_content: The content to write into the file.
 *
 * Return: If the function succeeds, returns 1. If an error occurs, returns -1.
 */


int create_file(const char *filename, char *text_content)
{
	int fp, length = 0, fpWrite;

	fp = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fp == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content[length] != '\0')
	{
		length++;
	}

	fpWrite = write(fp, text_content, length);

	if (fpWrite == -1)
	{
		return (-1);
	}
	close(fp);
	return (1);
}
