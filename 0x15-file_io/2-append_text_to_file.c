#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * append_text_to_file - Appends text to the end of an existing file.
 * @filename: The name of the file to which text is appended.
 * @text_content: The content to append to the file.
 *
 * Return: If the function succeeds, returns 1. If an error occurs, returns -1.
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fdOpen, fdWrite, length = 0;

	if (filename == NULL)
		return (-1);

	fdOpen = open(filename, O_WRONLY | O_APPEND);

	if (fdOpen == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
		text_content = "";

	while (text_content[length] != '\0')
	{
		length++;
	}

	fdWrite = write(fdOpen, text_content, length);

	if (fdWrite == -1)
		return (-1);

	close(fdOpen);

	return (1);
}

