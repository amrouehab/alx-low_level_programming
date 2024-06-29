#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 *                        left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	int days_in_months[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int day_of_year = 0;
	int remaining_days = 0;
	int i;

	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
	{
		days_in_months[2] = 29; /* Leap year adjustment */
	}

	if (month >= 1 && month <= 12 && day >= 1 && day <= days_in_months[month])
	{
		for (i = 1; i < month; i++)
		{
			day_of_year += days_in_months[i];
		}
		day_of_year += day;

		if (month >= 2 && day > days_in_months[month])
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		}
		else
		{
			if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
			{
				printf("Day of the year: %d\n", day_of_year);
				printf("Remaining days: %d\n", 366 - day_of_year);
			}
			else
			{
				printf("Day of the year: %d\n", day_of_year);
				printf("Remaining days: %d\n", 365 - day_of_year);
			}
		}
	}
	else
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
	}
}
