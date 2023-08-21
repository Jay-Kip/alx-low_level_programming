#include "main.h"
/**
* _memcpy - entry
* @dest: first string
* @src: second string
* @n: byres
* Return: zero
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
	dest[k] = src[k];
	}
	return (dest);
}
