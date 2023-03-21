#include "main.h"
/**
* jack_bauer - returns time
* @void: returns void
* Return: void
*/
void jack_bauer(void)
{
	int i;
	int j;

	i = 0;

	while (i < 24)
	{
		while (j < 60)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
