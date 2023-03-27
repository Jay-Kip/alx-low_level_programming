#include "main.h"
/**
* swap_int - entry
* @a: first value
* @b: second value
* Return: zero
*/
void swap_int(int *a, int *b)
{
	int j = *a;
	*a = *b;
	*b = j;
}
