#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node in idx
 * @h: head of nodes
 * @idx: index to insert nodes
 * @n: data to insert in node_node_new node
 * Return: list with node_node_new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *node_new, *node_tmp;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	count = 0;
	node_tmp = *h;
	while (count < idx - 1)
	{
		if (node_tmp == NULL)
			return (NULL);
		count++;
		node_tmp = node_tmp->next;
	}
	if (node_tmp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	else
	{
		node_new = malloc(sizeof(dlistint_t));
		if (!node_new)
			return (NULL);
		node_new->n = n;
		node_new->next = node_tmp->next;
		node_new->next->prev = node_new;
		node_tmp->next = node_new;
		node_new->prev = node_tmp;
	}
	return (node_new);
}
