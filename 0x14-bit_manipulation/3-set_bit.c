#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: the number
 * @index: index of the bit
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);

	return (1);
}
