#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
* array_iterator - executes a function given as parameter
* @array: array to be iterated
* @size: size of the array
* @action: pointer to the function
* Return: zero
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
