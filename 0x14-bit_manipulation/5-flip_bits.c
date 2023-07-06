#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - function that flips bites from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	int k = 0;
	unsigned long int p;
	unsigned long int z = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		p = z >> i;
		if (p & 1)
			k++;
	}
	return (k);
}
