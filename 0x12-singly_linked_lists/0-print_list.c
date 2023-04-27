#include "lists.h"
#include <stdio.h>
/**
* print_list - function to print all elements in the linked list
* @h: pointer to list_t to print the elements
* Return: number of nodes in the linked list
*/
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			s++;
		}
	}
	return (s);
}
