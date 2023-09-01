#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _islower - Checks if a character is a lowercase letter.
 *
 * Description: check if string is lowercase or not using
 *              _islower() function
 *              if string is lower then return 1
 *              else return 0
 *@character: The character to be checked.
 * Return: depends if character is lower then 1 isn't then 0
 */

int _islower(int character)
{
	int i;
	int result = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == character)
		{
			result = 1;
			break;
		}
	}
	return (result);
}
