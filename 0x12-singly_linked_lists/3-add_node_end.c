#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* add_node_end - function to add a node at the end of the list
* @head: pointer to list_t
* @str: string to be added at the new node
* Return: new node added at the end
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *tmp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = len;
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
