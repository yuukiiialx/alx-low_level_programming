#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_remaining_days - Prints the remaining days in a year
 *		after a given date
 *
 * This function calculates and prints the day of the year and the number of
 * remaining days in a year, based on the provided 'year', 'month', and 'day'.
 * It considers leap years and different month lengths to accurately determine
 * the remaining days.
 *
 * @year: The year for which the remaining days are calculated.
 * @month: The month for which the remaining days are calculated.
 * @day: The day of the month for which the remaining days are calculated.
 *
 * Return: None (void)
 */
int print_remaining_days(year, month, day)
{
	int start_day, last_day, remaining_days;

	if (month == 2)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			last_day = 29;
		}
		else
		{
			last_day = 28;
		}
	}
		else if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			last_day = 30;
		}
		else
		{
			last_day = 31;
		}

		if (day > last_day)
		{
			printf("Something wrong");
			return;
		}
		start_day = day;
		remaining_days = 365 - day;

	printf("Day of the year: %d\n", start_day);
	printf("Remaining days: %d\n", remaining_days);
}
