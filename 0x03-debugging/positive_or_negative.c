#include "main.h"

/**
 * positive_or_negative - function that take input i as a paramater and
 * check if the number pos or neg
 * @i : input
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is positive\n", i);
}
