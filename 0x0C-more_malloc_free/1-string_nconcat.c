#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - function to concatinate two strings
* @s1: first string
* @s2: second string
* @n: number of bytes to concatinate from s2 to s1
* Return: pointer to concatinated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int str1 = 0;
	unsigned int str2 = 0;

	while (s1 && s1[str1])
		str1++;
	while (s2 && s2[str2])
		str2++;

	if (n < str2)
	{
		ptr = malloc(sizeof(char) * (str1 + n + 1));
	}
	else
		ptr = malloc(sizeof(char) * (str1 + str2 + 1));
	if (!ptr)
		return (NULL);
	while (i < str1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (n < str2 && i < (str1 + n))
	{
		ptr[i++] = s2[j++];
	}
	while (n > str2 && i < (str1 + str2))
	{
		ptr[i++] = s2[j++];
	}

	ptr[i] = '\0';

	return (ptr);
}
