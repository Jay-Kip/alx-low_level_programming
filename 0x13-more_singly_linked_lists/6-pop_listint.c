#include "lists.h"
/**
* pop_listint - function to delete the list head
* @head: pointer to the list
* Return: content in the deleted node
*/
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
	{
		return (0);
	}
	n = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;
	return (n);
}
