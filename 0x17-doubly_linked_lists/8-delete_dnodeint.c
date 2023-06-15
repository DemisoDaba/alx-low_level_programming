#include "lists.h"

/**
 * delete_node - deletes a node from a linked list
 * @head: head of the list
 * @del_node: node to be deleted
 */
void delete_node(dlistint_t **head, dlistint_t *del_node)
{
	if (*head == del_node)
		*head = del_node->next;
	if (del_node->next != NULL)
		del_node->next->prev = del_node->prev;
	if (del_node->prev != NULL)
		del_node->prev->next = del_node->next;
	free(del_node);
}

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: head of the linked list
 * @index: index of node to delete
 * Return: returns 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *node_tmp;

	if (*head == NULL)
		return (-1);

	for (count = 0, node_tmp = *head; node_tmp != NULL && count < index; count++)
		node_tmp = node_tmp->next;
	if (node_tmp == NULL)
		return (-1);

	delete_node(head, node_tmp);
	return (1);
}
