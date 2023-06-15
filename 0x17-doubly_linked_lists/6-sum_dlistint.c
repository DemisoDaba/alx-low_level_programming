#include "lists.h"

/**
 * sum_dlistint - add all elements of list
 * @head: head of list
 * Return: sum of elements of the list
 */
int sum_dlistint(dlistint_t *head)
{
	size_t add = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
