#include "lists.h"

/**
 * dlistint_len - function that return the length of a linked list
 * @h: head node of the linked list
 * Return: size of the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current_node = h;
	int i = 0;

	while (current_node != NULL)
	{
		current_node = current_node->next;
		i++;
	}
	return (i);
}
