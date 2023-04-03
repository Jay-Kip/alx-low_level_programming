#include "main.h"
/**
* _memset - entry
* @s: pointer
* @b: constant
* @n: bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
