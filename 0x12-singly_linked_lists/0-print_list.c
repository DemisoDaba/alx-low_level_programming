#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
