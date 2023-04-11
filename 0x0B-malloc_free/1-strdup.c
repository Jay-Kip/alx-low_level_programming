#include "main.h"
#include <stdlib.h>
/**
* _strdup - function oto return a pointer to a newly allocated space in memory
* @str: string to be duplicated
* Return: a pointer to the duplicate string or NULL if if string is NULL
*/
char *_strdup(char *str)
{
	char *ptr;

	int i;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	ptr = malloc(i + 1 * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j]; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
}
