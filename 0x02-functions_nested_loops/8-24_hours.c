#include <stdio.h>
#include <stdlib.h>
#include <main.h>

/**
 * jack_bauer - Displays all the minutes of a 24-hour period.
 *
 * This function iterates through all the minutes in a 24-hour period
 * and prints them in the format "HH:MM", where HH represents hours
 * and MM represents minutes, each followed by a newline character.
 * Return: none
 */


int jack_bauer(void)
{
	int min, hour;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
