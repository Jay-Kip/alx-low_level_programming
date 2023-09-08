#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: key to be added
 * @value: Value to the key
 * Return:1 on success o in failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *copy_val;
	unsigned long int i, j;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	copy_val = strdup(value);
	if (copy_val == NULL)
		return (0);

	j = key_index((const unsigned char *)key, ht->size);

	for (i = j; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy_val;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(copy_val);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = copy_val;
	new->next = ht->array[j];
	ht->array[j] = new;

	return (1);
}
