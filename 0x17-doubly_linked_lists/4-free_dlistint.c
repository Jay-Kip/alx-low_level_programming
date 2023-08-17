#include "lists.h"
/**
 * free_dlistint - function to free a linked list
 * @head: pointer to hed node
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
