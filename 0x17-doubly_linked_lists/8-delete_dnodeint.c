#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: pointer to the head node
 * @index: index of the node to be deleted
 * Return: deleted node
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node;
	dlistint_t *new_node;
	unsigned int i;

	current_node = *head;

	if (current_node != NULL)
		while ((current_node->prev != NULL))
			current_node = current_node->prev;
	i = 0;

	while (current_node != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = current_node->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				new_node->next = current_node->next;

				if (current_node->next != NULL)
					current_node->next->prev = new_node;
			}
			free(current_node);
			return (1);
		}
		new_node = current_node;
		current_node = current_node->next;
		i++;
	}
	return (-1);
}
