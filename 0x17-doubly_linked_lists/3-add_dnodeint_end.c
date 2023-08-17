#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end of the list
 * @head: pointer to the head node
 * @n: node being added
 * Return: a new node at the end of the list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		dlistint_t *current_node = *head;

		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node;
		new_node->prev = current_node;
	}
	return (new_node);
}