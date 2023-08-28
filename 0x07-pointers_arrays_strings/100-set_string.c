#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Double pointer to a char (pointer to pointer).
 * @to: Pointer to a char (the value to set @s to).
 *
 * Return: void (no return value).
 */

void set_string(char **s, char *to)
{
	*s = to;
}
