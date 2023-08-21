#include "main.h"
/**
* _isalpha - check if if char is alphabet
* @c: returns integer
* Return: 1 0r 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
