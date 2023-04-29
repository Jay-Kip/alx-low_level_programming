#include "lists.h"
/**
* free_listint - function to free a linked list
* @head: pointer to the linked list
*/
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
