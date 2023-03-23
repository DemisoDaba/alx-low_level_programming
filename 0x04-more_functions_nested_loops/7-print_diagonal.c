#include "main.h"
/**
 *print_diagonal - a function that draws a diagonal line on the terminal.
 *
 *@n: represents the number of times the character "\" should be printed.
 *Return: The value will return 0.
 */

void print_diagonal(int n)
{
	int i, a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < n)
		{
			a = 0;
			while (a <= i)
			{
				if (a == i)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
				a++;
			}
			_putchar('\n');
			i++;
		}
	}
}
