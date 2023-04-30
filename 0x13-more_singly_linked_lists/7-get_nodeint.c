#include "lists.h"
/**
* get_nodeint_at_index -  function to nth node in a linked list
* @head: pointer to the linked lists
* @index: index of the node
* Return: pointer to the nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = head;

	while (node && i < index)
	{
		node = node->next;
		i++;
	}
	return (node ? node : NULL);
}
