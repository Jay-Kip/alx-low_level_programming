#include <stdio.h>
#include "main.h"
/**
* clear_bit - function that sets the value of a bit to 0
* @n: the number
* @index: index of the bit to be set to 0
* Return: 1 or 0(success or fail)
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
