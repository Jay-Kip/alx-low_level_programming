#include <stdio.h>
#include "lists.h"
/**
* reverse_listint - function to reverse a linked list
* @head: pointer to the linked list
* Return: reversed linked list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *prev = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
