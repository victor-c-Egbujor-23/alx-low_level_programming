#include "main.h"

/**
 * print_more_numbers - prints the numbers 0-14 ten times
 * Return: void
 */

void print_more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; c++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar (j % 10 + '0');
		}
		_putchar('\n');
	}
}
