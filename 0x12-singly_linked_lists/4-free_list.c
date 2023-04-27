#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
* free_list - function to free linked list
*@head: pointer to list_t
*/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
