#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - take a date and prints how many day
 * left in the year taking leap years into account
 * @month: month in number format
 * @day: day of the month
 * @year: year
 * Return void
 */

void print_remaining_days(int month, int day, int year)
{
	if(month > 2 && day >= 60)
	{
		day
