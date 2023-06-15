#include "lists.h"

/**
 * get_dnodeint_at_index - free of list
 * @head: head of node
 * @index: index
 * Return: return
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
size_t contador = 0;
while (head != NULL)
{
if (contador == index)
{
break;
}
contador++;
head = head->next;
}
return (head);
}
