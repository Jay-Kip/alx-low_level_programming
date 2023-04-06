#include "main.h"
/**
* wildcmp - entry point of function wildcmp
* @s1: first string
* @s2: second string
* Return: 1 if stings are idrntical and 0 otherwise
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *(s2 + 1) != '\0' && *s2 == '*')
	{
		return (0);
	}
	else if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	return (0);
}
