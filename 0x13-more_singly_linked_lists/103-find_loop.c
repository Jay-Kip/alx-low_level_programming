#include <stdio.h>
#include "lists.h"
/**
* find_listint_loop - function to find the loop in a linked list
* @head: pointer to the linked list
* Return: adress to the begining of the loop
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *k = head;
	listint_t *j = head;

	if (!head)
		return (NULL);

	while (k && j && j->next)
	{
		j = j->next->next;
		k = k->next;
		if (j == k)
		{
			k = head;
			while (k != j)
			{
				k = k->next;
				j = j->next;
			}
			return (j);
		}
	}
	return (NULL);
}
