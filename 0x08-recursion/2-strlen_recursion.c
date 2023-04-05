#include "main.h"
/**
* _strlen_recursion - string lenth entry point
* @s: string
* Return: zero
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
}
