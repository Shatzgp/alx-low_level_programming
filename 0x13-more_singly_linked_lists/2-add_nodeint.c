#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list.
 * @head: pointer to the beginning of a listint_t list
 * @n: integer data
 *
 * Return: pointer to the new created node .
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
