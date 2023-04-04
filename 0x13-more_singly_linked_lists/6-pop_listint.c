#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the head data (n)
 */
int pop_listint(listint_t **head)
{
	 listint_t *tmp;
	 int number;

	if (!*head)
		return (0);
	 number = (*head)->n;
	 tmp = (*head)->next;
	  free(tmp);
	return (number);
}
