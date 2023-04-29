#include "lists.h"
/**
* add_nodeint_end - fucntion to add a node at the end of alinked list
* @head: pointer to the linked list
* @n: item to be added to the linked list
* Return: new node at the end
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *tmp = *head;

	newNode = malloc(sizeof(listint_t));

	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = newNode;

	return (newNode);
}
