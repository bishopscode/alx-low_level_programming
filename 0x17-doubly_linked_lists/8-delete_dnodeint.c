#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
 * @head: Pointer to the pointer to the head of the doubly linked list.
 * @index: Index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current, *temp;

	if (*head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
	*head = current->next;
	if (*head != NULL)
		(*head)->prev = NULL;
	free(current);
	return (1);
	}

	while (current != NULL)
	{
	if (count == index)
	{
		temp = current->prev;
		temp->next = current->next;

		if (current->next != NULL)
		current->next->prev = temp;

		free(current);
		return (1);
	}

	count++;
	current = current->next;
	}

	return (-1); /* Index out of bounds*/
}
