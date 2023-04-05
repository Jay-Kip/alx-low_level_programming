#include "main.h"
/**
* _print_rev_recursion - reverse entry point
* @s: input string
* Return: zero
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
	}

}

