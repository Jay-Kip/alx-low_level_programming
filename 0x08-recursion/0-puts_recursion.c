#include "main.h"
/**
* _puts_recursion - entry point
* @s: inputed string
* Return: Zero
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
}
