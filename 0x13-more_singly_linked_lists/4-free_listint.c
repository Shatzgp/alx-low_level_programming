#include "lists.h"

/**
 * free_listint - free a list
 * @head: pointer to the first element in the list
 *
 * return:void
 */
void free_listint(listint_t *head)
{
	listint_t *nnodes;

	while (head)
	{
		nnodes = head->next;
		free(head);
		head = nod;
	}
}
