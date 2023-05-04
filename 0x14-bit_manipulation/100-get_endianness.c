#include <stdio.h>
#include "main.h"
/**
*  get_endianness - function to check endianness.(if a machine is big or little
* Return: 0 big, 1 little
*/
int get_endianness(void)
{
	unsigned int j = 1;
	char *d = (char *) &j;

	return (*d);
}
