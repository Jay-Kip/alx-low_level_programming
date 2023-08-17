#include "lists.h"
/**
 * free_dlistint - function to free a linked list
 * @head: pointer to hed node
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;
	dlistint_t *next_node;

	current_node = head;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}
