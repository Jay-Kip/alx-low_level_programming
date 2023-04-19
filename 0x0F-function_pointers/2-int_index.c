#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
* int_index - funtion to search for integers
* @array: array to be checked
* @size: size of the array
* @cmp: pointer to function cmp used to compare the values
* Return: -1 if no element matches r 0 if an
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
