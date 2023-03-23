#include "main.h"
#include <stdio.h>
/**
* print_most_numbers - entry point
*
* Return: always 0
*/
void print_most_numbers(void)
{
	char k;

	for (k = '0'; k <= '9'; k++)
	{
		if (k != '2' && k != '4')
		{
			_putchar(k);
		}
	}
	_putchar('\n');
}
