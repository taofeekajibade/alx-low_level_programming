#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	int total_days = 365;
	int day_of_year = 0;
	int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int i = 0;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		total_days = 366;
	}
	if (month < 1 || month > 12 || day < 1 || day > 31)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}
	if (month == 2 && day > 29)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	if (total_days == 366)
	{
		days_in_month[1] = 29; /* February has 29 days in a leap year */
	}

	while (i < month - 1)
	{
		day_of_year += days_in_month[i];
		i++;
	}
	day_of_year += day;
	printf("Day of the year: %d\n", day_of_year);
	printf("Remaining days: %d\n", total_days - day_of_year);
}
