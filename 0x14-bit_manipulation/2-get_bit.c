#include <stdio.h>
#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the number
 * @index: index of the bit
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int k = 0;

	if (index > 63)
	{
		return (-1);
	}

	k = (n >> index) & 1;

	return (k);
}
