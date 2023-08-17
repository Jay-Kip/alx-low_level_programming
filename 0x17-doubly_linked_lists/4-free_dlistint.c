#include "lists.h"
/**
 * free_dlistint - function to free a linked list
 * @head: pointer to hed node
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int count = 0;

	while (current != NULL)
	{
		current = current->next;
		free(current);
		count++;
	}
}
