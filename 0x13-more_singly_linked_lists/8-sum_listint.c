#include "lists.h"
/**
* sum_listint - function to return the sum of all data in the linkded list
* @head: pointer to the linked list
* Return: sum of the items in the linked list
*/
int sum_listint(listint_t *head)
{
	int n;
	listint_t *node = head;

	n = 0;
	while (node)
	{
		n += node->n;
		node = node->next;
	}
	return (n);
}
