#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_binary - function to print binary representation of a number.
 * @n: number to be converted
 */

void print_binary(unsigned long int n)
{
	int i = 0;
	int j = 0;
	unsigned long int p;

	for (i = 63; i >= 0; i--)
	{
		p = n >> i;
		if (p & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}

