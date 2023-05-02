#include <stdio.h>
#include "lists.h"
/**
* _loop - function to loop in the nodes
* @head: pointer to the linked list
* Return: 0 if the list is not looped
*/
size_t _loop(const listint_t *head)
{
	const listint_t *a;
	const listint_t *b;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	a = head->next;
	b = (head->next)->next;

	while (b)
	{
		if (a == b)
		{
			a = head;
			while (b != a)
			{
				node++;
				a = a->next;
				b = b->next;
			}
			a = a->next;

			while (a != b)
			{
				node++;
				a = a->next;
			}
			return (node);
		}
		a = a->next;
		b = (b->next)->next;
	}
	return (0);
}

/**
* print_listint_safe - function that prints a linked list
* @head: pointer to the linked list
* Return: number of node in the linked list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t x, y = 0;

	x = _loop(head);

	if (x == 0)
	{
		for (; head != NULL; x++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (y = 0; y < x; y++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (x);
}
