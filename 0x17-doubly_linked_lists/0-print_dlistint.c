#include "lists.h"
/**
 * print_dlistint - function to print all the elements in a list
 * @h: pointer to the head node of the linked list
 * Return: elements and number of elements in the linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current_node = h;
	int i = 0;

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		current_node = current_node->next;
		i++;
	}
	return (i);
}
