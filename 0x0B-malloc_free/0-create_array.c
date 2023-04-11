#include "main.h"
#include <stdlib.h>
/**
* create_array - function to create an array of chars
* @size: array size
* @c: char to be assigned
* Return: pointer to the array or NULL oif it fails
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size * sizeof(char));

	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
