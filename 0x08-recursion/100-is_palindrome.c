#include "main.h"
/**
* pal - entry for pal function
* @s: incoming string
* @a: smallest
* @b: biggest
* Return: if palendrome or not
*/
int pal(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
		{
			return (1);
		}
		return (0 + pal(s, a + 1, b - 1));
	}
	return (0);
}
/**
* strlength - entry point of checking string length
* @s: string to be checked
* Return: lenth of the string
*/
int strlength(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + strlength(s + 1));
	}
}
/**
* is_palindrome - entry point of palindrome check
* @s: string
* Return: if palindrome or not
*/
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	return (pal(s, 0, strlength(s) - 1));
}
