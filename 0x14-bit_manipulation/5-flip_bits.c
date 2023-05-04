#include <stdio.h>
#include "main.h"
/**
* flip_bits - return number of bytes needed to flip from one number to another
* @n: num1
* @m: num2
* Return: number of bits to be changed
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, c = 0;
	unsigned long int cu;
	unsigned long int k = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		cu = k >> i;
		if (cu & 1)
			c++;
	}
	return (c);
}
