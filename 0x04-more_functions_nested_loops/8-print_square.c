#include "main.h"

/**
 *print_square - prints a square followed by a new line.
 *@size: The variable size is the size of the square.
 *Return: The value 0 is returned.
 *
 */

void print_square(int size)
{
	int i, a;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < size)
		{
			_putchar('#');

			a = 1;
			while (a < size)
			{
				_putchar('#');
				a++;
			}
			_putchar('\n');
			i++;
		}
	}
}
