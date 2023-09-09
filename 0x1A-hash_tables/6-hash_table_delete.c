#include "hash_tables.h"

/**
 * hash_table_delete - deletes the hash table
 * @ht: pointer to the hash table
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head_node = ht;
	hash_node_t *current_node;
	hash_node_t *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		if (ht->array[i] != NULL)
		{
			current_node = ht->array[i];
			while (current_node != NULL)
			{
				temp = current_node->next;
				free(current_node->key);
				free(current_node->value);
				free(current_node);
				current_node = temp;
			}
		}
	}
	free(head_node->array);
	free(head_node);
}

