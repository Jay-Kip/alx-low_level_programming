#include "main.h"
#include <stdio.h>
/**
* get_bit - function that returns the value of a bit given index
* @n: the number
* @index: index of the bit
* Return: value of the bit given
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > 63)
		return (-1);

	b = (n >> index) & 1;

	return (b);
}
