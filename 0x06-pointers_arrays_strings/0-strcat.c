#include "main.h"
/**
* *_strcat - entry
* @dest: first string
* @src: second string
* Return: zero
*/
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest = '\0';

	return (0);
}
