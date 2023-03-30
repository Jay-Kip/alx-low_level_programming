#include "main.h"
/**
* reverse_array - entry
* @a: first integer
* @n: space
* Return: revrese array
*/
void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = '\0';
	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
