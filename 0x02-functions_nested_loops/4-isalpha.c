#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *	_isalpha - Checks if a character is an alphabetic letter.
 *
 *	Description: check if string is lowercase or not using
 *			_isalpha() function
 *			if character is letter then return 1
 *			else return 0
 *	@character: The character to be checked.
 * Return: depends if character is lower then 1 isn't then 0
 */

int _isalpha(int character)
{
	int i;
	int j;
	int result = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			if (i == character)
			{
				result = 1;
				break;
			}
			if (j == character)
			{
				result = 1;
				break;
			}
		}
	}
	return (result);
}
