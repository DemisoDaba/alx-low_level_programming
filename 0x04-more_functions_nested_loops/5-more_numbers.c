#include "main.h"
/**
 * more_numbers - a function that prints numbers from 0 to 14,
 * followed by a new line
 *
 * Return: The returned value will be 0.
 */

void more_numbers(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
