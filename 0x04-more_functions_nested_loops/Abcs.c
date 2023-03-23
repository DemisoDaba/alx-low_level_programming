#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 *
 * @n: represents the number of times the character "\" should be printed.
 * Return: The value will return 0.
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	int i = 0;

	while (i < n)
	{
		int j = 0;

		while (j < i)
		{
			_putchar(' ');
			j++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
