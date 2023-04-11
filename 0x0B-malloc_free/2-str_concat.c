#include "main.h"
#include <stdlib.h>
/**
* str_concat - function to concatinate two strings
* @s1: first string
* @s2: second string
* Return: pointer to to newly allocated space in memory
*/
char *str_concat(char *s1, char *s2)
{
	char *k;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	k = malloc(sizeof(char) * (i + j + 1));
	if (k == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		k[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
	k[j] = s2[j];
	i++;
	j++;
	}
	k[i] = '\0';
	return (k);
}
