#include "main.h"
/**
* _islower - checks if char is lowercase
* @c : is char to be checked
* Return: zero
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
