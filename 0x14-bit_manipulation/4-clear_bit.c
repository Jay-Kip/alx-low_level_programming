#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - function that sets value of a bit to 0
 * @n: The number
 * @index: index of the bit to set
 * Return: 1 if success or -1 if fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
