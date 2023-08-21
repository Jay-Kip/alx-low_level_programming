#include "main.h"
/**
* _strspn - entry
* @s: input string
* @accept: input
* Return: zero
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, j;

	n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			return (n);
		}
	}
	return (n);
}
