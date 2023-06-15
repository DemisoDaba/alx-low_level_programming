#include "lists.h"

/**
 * add_dnodeint - Return size of list
 * @n: head of node
 * @head: head of node
 * Return: count of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *node_samu = NULL;
dlistint_t *temp_samu = NULL;
node_samu = malloc(sizeof(dlistint_t));
if (node_samu == NULL)
{
return (NULL);
}
node_samu->n = n;
node_samu->prev = NULL;
temp_samu = *head;
*head = node_samu;
node_samu->next = temp_samu;
if (temp_samu != NULL)
{
temp_samu->prev = *head;
}
return (node_samu);
}
