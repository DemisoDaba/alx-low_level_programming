#include "main.h"

/**
 * print_numbers - function that print all numbers 0 to 9
 *
 * Return: returns nothing
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
