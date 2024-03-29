#include "lists.h"

/**
 * delete_nodeint_at_index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (pass), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	 listint_t *temp = *head;
	 listint_t *current = NULL;
	 unsigned int i = 0

		if (*head == NULL)
			return (-1);

	if  (index == 0)
		{
			*head = (*head)->next;
			free(tmp);
			return (1);
		}
	while (1 < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		i++;
	}
	return (1)
}

