#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* add_node - function to add a node into a linked list
* @head: pointer to the list
* @str: new string to the added node
* Return: a new node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int len;

	len = 0;

	while (str[len])
		len++;
	newNode = malloc(sizeof(list_t));
	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = (*head);
	(*head) = newNode;

	if (!newNode)
	{
		return (NULL);
	}
	return (*head);
}
