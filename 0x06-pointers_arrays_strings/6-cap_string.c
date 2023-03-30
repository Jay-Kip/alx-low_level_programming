#include "main.h"
/**
* cap_string - entry
* @n: string
* Return: zero
*/
char *cap_string(char *n)
{
	int i;

	i = 0;
	while (n[i])
	{
		while (!(n[i] >= 'a' && n[i] <= 'z'))
			n++;

		if (n[i - 1] == ' ' ||
		n[i - 1] == 't' ||
		n[i - 1] == '\n' ||
		n[i - 1] == ',' ||
		n[i - 1] == ';' ||
		n[i - 1] == '.' ||
		n[i - 1] == '!' ||
		n[i - 1] == '?' ||
		n[i - 1] == '"' ||
		n[i - 1] == '(' ||
		n[i - 1] == ')' ||
		n[i - 1] == '{' ||
		n[i - 1] == '}' ||
		n == 0)
			n[i] -= 32;
		i++;
	}
	return (n);
}

