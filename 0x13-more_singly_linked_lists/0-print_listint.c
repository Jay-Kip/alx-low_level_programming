#include "lists.h"
/**
* print_listint - function to print all the elements in a linked list
* @h: linked list to be typed
* Return: number of items in the linked list
*/
size_t print_listint(const listint_t *h)
{
	size_t k = 0;

	while (h)
	{
		printf("%d\n", h->n);
		k++;
		h = h->next;
	}
	return (k);
}
