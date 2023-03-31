#include "main.h"
/**
* print_number - entry
* @n: int
* Return: zero
*/
int print_number(int n)
{
	int i = n;

	while (i != '\0')
	{
		if (i >= 0 && i <= 1000 && i <= -1000)
		{
			i = i;
		}
		i++;
	}
	return (i);
}
