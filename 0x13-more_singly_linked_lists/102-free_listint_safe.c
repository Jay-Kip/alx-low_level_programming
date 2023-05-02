#include <stdio.h>
#include "lists.h"
/**
* free_listint_safe - function  to free a list with a loop
* @h: pointer to the list
* Return: size of the freed list
*/
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	int d;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}
	*h = NULL;
	return (size);
}
