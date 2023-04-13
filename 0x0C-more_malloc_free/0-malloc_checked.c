#include <stdlib.h>
#include "main.h"
/**
* malloc_checked - function to allocate memoty using malloc
* @b: int
* Return: pointer to mamory
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit (98);
	}
	return (p);
}
