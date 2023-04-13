i#include "main.h"
#include <stdlib.h>
/**
* _realloc - function to reallocate memory using malloc and free
* @ptr: pointer to memory location
* @old_size: previous memory size
* @new_size: new memory size(newly allocated)
* Return: pointer to new memory location
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *d;
	char *q;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}

	d = malloc(new_size);
	if (!d)
		return (NULL);
	q = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			d[i] = q[i];
	}
	free(ptr);
	return (d);
}
