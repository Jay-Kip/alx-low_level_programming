#include "main.h"
#include <stdlib.h>
/**
* argstostr - function to concatinate all the arguements
* @ac: number of arguements
* @av: arguement vector
* Return: concatinated arguements
*/
char *argstostr(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int d = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			k++;
	}
	k += ac;

	ptr = malloc(sizeof(char) * k + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[d] = av[i][j];

			d++;
		}
		if (ptr[d] == '\0')
		{
			ptr[d++] = '\n';
		}
	}
	return (ptr);
}
