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
	dlistint_t *new_node;
	dlistint_t *current_node;
	unsigned int i;

	new_node = NULL;
	if (idx == 0)
		new_node = add_dnodeint(h, n);

	else
	{

		current_node = *h;
		i = 1;

		if (current_node != NULL)
			while (current_node->prev != NULL)
				current_node = current_node->prev;

		while (current_node != NULL)
		{
			if (i == idx)
			{
				if (current_node->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));

					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = current_node->next;
						new_node->prev = current_node;
						current_node->next->prev = new_node;
						current_node->next = new_node;
					}
				}
				break;
			}
			current_node = current_node->next;
			i++;
		}
	}
	return (new_node);
}
