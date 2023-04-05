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
		_putchar(*s);
		s--;
		_print_rev_recursion(s);
	
	}
	
	_putchar('\n');
	return;
}

