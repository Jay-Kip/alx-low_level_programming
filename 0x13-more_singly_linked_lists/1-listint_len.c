#include "lists.h"
/**
* listint_len - function to print number of elements in alinked list
* @h: the linked list
* Return: number of elements in the linked list
*/
size_t listint_len(const listint_t *h)
{
	size_t n;

	n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
