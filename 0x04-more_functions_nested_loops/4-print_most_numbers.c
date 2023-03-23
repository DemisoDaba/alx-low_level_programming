#include "main.h"
/**
 * print_most_numbers - a function that prints numbers from 0 to 9,
 * not printing 2 and 4, followed by a new line
 *
 * Return: The returned value will be 0.
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');
}
