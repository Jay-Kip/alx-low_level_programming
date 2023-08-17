#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: pointer to head node
 * @idx: indext to be inserted
 * @n: data to be inserted
 * Return: Null
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node = *h;
	unsigned int i = 0;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (current_node != NULL)
	{
		if (i == idx)
		{
			new_node->prev = current_node;
			new_node->next = current_node->next;

			if (new_node == NULL)
				return (NULL);

			if (current_node->next != NULL)
				current_node->next->prev = new_node;

		current_node->next = new_node;
		return (new_node);
		}
		current_node = current_node->next;
		i++;
	}
	free(new_node);
	return (NULL);
}
