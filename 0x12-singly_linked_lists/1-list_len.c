#include "lists.h"
#include <stdio.h>
/**
* list_len - function that returns number of elements in linked list
* @h: pointer to list
* Return: number of elements in list_h
*/
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
