# include "main.h"
#include <stdio.h>
/**
* _isupper - entery point
* @c: char
* Return: letter
*/
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
