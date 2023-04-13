#include "main.h"
#include <stdlib.h>
/**
* array_range - function to create an array of integers
* @min: minimum number of numbers
* @max: maximum number of numbers
* Return: pointer to the array of integers
*/
int *array_range(int min, int max)
{
	int *ptr;

	int i;
	int j;

	if (min > max)
	{
		return (NULL);
	}

	i = max - min + 1;

	ptr = malloc(sizeof(int) * i);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; min <= max; j++)
	{
		ptr[j] = min++;
	}
	return (ptr);
}
