#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at the passed index
 * @head: pointer to the linked list
 * @index: index of the pointer
 * Return: the node at the index passed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;
	unsigned int i = 0;

	while (current_node != NULL)
	{
		if (i == index)
			return (current_node);
		current_node = current_node->next;
		i++;
	}
	return (NULL);
}
