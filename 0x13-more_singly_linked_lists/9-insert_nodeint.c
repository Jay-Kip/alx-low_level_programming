#include <stdio.h>
#include "lists.h"
/**
* insert_nodeint_at_index - function that iserts a node at a given position
* @head: pointer to the linked list
* @idx: index to add the node
* @n: item to be added to the linked list
* Return: pointer to the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newNode;
	listint_t *tmp = *head;

	newNode = malloc(sizeof(listint_t));
	if (!head || !newNode)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newNode->next = tmp->next;
			tmp->next = newNode;
			return (newNode);
		}
		else
		{
			tmp = tmp->next;
		}
	}
	return (NULL);
}
