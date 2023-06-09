#include "main.h"
/**
 * * binary_to_uint - function that converst binary number to an unsigned int
 * * @b: binary number
 * * Return: binary converted to unsigned int
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int z = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		z = 2 * z + (b[i] - '0');
	}
	return (z);
}
