#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm.
 * @array : is a pointer to the first element of the array to search in.
 * @size : the number of elements in array.
 * @value : the value to search for.
 * Return: index of value or -1 if not found.
*/
int binary_search(int *array, size_t size, int value)
{
	size_t index = 0, j = size - 1, m;

	if (array)
	{
		while (index <= j)
		{
			printf("Searching in array: ");
			for (m = index; m < j; m++)
				printf("%d, ", array[m]);
			printf("%d\n", array[m]);
			m = (index + j) / 2;
			if (array[m] < value)
				index = m + 1;
			else if (array[m] > value)
				j = m - 1;
			else
				return (m);
		}
	}
	return (-1);
}
