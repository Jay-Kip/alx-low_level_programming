#include "main.h"
#include <stdlib.h>
/**
* _calloc - function to allocate memory for an array
* @nmemb: number of elements
* @size: number of bytes
* Return: pointer to memory location
*/
char *_memcon(char *s, char b, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);
	
	if (p == NULL)
		return (NULL);

	_memcon(p, 0,  nmemb * size);

	return (p);
}

/**
* memcon - fills memory with a cinstatnt byte
* @m: memory area to be filled
* @b: char to copy
* @n: number of times to copy
* Return: pointer to memory area
*/
char *_memcon(char *m, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		m[i] = b;
	}

	return (m);
}
