#include "lists.h"
/**
 * sum_dlistint - sums all the data in the linked list
 * @head: pointer to the head node
 * Return: sum of all the data in the linked list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	int sum = 0;
	int i = 0;

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
		i++;
	}
	return (sum);
}
