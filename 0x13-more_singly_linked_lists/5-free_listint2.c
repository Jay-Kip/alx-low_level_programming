#include "lists.h"

/**
* free_listint2 - function to free a linked list
* @head: pointer to the linked list
*/
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	*head = NULL;
}
