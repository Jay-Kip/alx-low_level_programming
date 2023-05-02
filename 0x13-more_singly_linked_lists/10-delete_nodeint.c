#include <stdio.h>
#include "lists.h"
/**
* delete_nodeint_at_index - function to delete a node at index of a linked list
* @head: pointer to the linked list
* @index: index of the node to be deleted
* Return: 1 if successful 0 otherwise
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		
		return (1);
	}

	current = *head;
	for (i = 0; current != NULL && i < index; i++)
	{
		previous = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	previous->next = current->next;
	free(current);
	return (1);
}
