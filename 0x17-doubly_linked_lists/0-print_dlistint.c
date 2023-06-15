#include "lists.h"

/**
 * print_dlistint - print data in nodes
 * @h: head of node
 * Return: count of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
return (count);
}
