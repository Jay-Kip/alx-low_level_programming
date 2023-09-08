#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 * @size: size of the hash table
 * Return: pointer to an ew hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/*Allocate memory for the hash table*/
	hash_table_t *hashTable;
	unsigned long int i;

	hashTable = malloc(sizeof(hash_table_t));

	if (hashTable == NULL)
		return (NULL);

	/*Set size of the hash table*/
	hashTable->size = size;

	/*Allocate memory for the table array*/
	hashTable->array = malloc(sizeof(hash_node_t *) * size);

	if (hashTable->array == NULL)
	{
		free(hashTable);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		hashTable->array[i] = NULL;
	}

	return (hashTable);
}
