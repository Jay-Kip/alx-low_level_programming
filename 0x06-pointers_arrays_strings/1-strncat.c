#include "main.h"
/**
*_strncat - entry
* @*dest: first string
*@src: second string
* @n: bytes
* Return: zero
*/
char *_strncat(char *dest, char *src, int n)
{
	while (*dest != '\0')
	{
		dest++:
	}
	while (*src != '\0')
	{
		*dest = *src;
		*dest++;
		*src++;
	}
	*dest != '\0';
}
