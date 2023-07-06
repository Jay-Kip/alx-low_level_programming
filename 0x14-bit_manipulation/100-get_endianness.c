#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_endless - function to check endlessness(if a machine is big or small)
 * Return: 0 for big machine 1 for small machine
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *s = (char *) &i;

	return (*s);
}
