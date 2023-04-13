#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <math.h>
/**
* check - function to check for a non-digit
* @s: string to be checked
* Return: 0 if a non digit is found else
*/
int check(char *s)
{
	int j = 0;

	while (s[j])
	{
		if (s[j] < '0' || s[j] > '9')
			return (0);
		j++;
	}
	return (1);
}
/**
* _len - function to check length of a string
* @s: string being checked
* Return: string lenth
*/
int _len(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}
/**
* err - error handler
*/
void err(void)
{
	printf("Error\n");
	exit(98);
}
/**
* main - function to multiply two positive numbers
* @argc: arguement count
* @argv: arguement vector
* Return: product of the two positive numbers
*/
int main(int argc, char *argv[])
{
	char *a, *b;
	int fl, ll, len, i, carry, d1, d2, *res, d = 0;

	a = argv[1], b = argv[2];
	if (argc != 3 || !check(a) || !check(b))
		err();
	fl = _len(a);
	ll = _len(b);
	len = fl + ll + 1;
	res = malloc(sizeof(int) * len);
	if (!res)
		return (1);
	for (i = 0; i <= fl + ll; i++)
		res[i] = 0;
	for (fl = fl - 1; fl >= 0; fl--)
	{
		d1 = a[fl] - '0';
		carry = 0;
		for (ll = _len(b) - 1; ll >= 0; ll--)
		{
			d2 = b[ll] - '0';
			carry += res[fl + ll + 1] + (d1 * d2);
			res[fl + ll + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			res[fl + ll + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (res[i])
			d = 1;
		if (d)
			_putchar(res[i] + '0');
	}
	if (!d)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
