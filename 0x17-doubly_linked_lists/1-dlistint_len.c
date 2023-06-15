#include "lists.h"

/**
 * dlistint_len - Return size of list
 * @h: head of node
 * Return: count of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
