#include <stdio.h>

/**
 * main - prints all single digits form 0 to 9
 * followeed by a new line
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
