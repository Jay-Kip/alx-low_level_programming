#include "hash_tables.h"
/**
 * key_index - function that gives you index of a key
 * @key: the key whom index is to be searched
 * @size: size of the array of the hashtable
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
