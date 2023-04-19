#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array.
 * @size: the size of the array.
 * @cmp:  is a pointer to the function to be used to compare values.
 * Return: If no element matches or size <= 0 - -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
