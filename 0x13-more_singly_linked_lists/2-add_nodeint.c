#include "lists.h"
/**
* add_nodeint - function to add a node to the front of a linked list
* @head: pointer to the linked list
* @n: element to be added to the linked list
* Return: added node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
