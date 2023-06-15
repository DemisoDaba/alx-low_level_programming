#include "lists.h"

/**
 * add_dnodeint_end - Return size of list
 * @n: head of node
 * @head: head of node
 * Return: count of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *node_samu = NULL;
dlistint_t *temp_node = NULL;

node_samu = malloc(sizeof(dlistint_t));
if (node_samu == NULL)
{
return (NULL);
}
node_samu->n = n;
node_samu->next = NULL;
temp_node = *head;
if (*head == NULL)
{
*head = node_samu;
node_samu->prev = NULL;
return (node_samu);
}
while (temp_node->next != NULL)
{
temp_node = temp_node->next;
}
temp_node->next = node_samu;
node_samu->next = NULL;
node_samu->prev = temp_node;

return (node_samu);
}
