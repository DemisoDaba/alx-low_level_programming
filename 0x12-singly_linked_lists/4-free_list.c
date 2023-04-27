#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *alist_list;

	while ((alist_list = head) != NULL)
	{
		head = head->next;
		free(alist_list->str);
		free(alist_list);
	}
}
