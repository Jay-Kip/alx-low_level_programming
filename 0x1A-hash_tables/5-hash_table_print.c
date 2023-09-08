#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: pointer to the hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;
	unsigned char comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma == 1)
				printf(", ");

			current = ht->array[i];
			while (current != NULL)
			{
				printf("'%s': '%s'", current->key, current->value);
				current = current->next;

				if (current != NULL)
					printf(", ");
			}
			comma = 1;
		}
	}
	printf("}\n");
}
