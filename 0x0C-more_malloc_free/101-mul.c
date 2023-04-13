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
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
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
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (0);
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
	int len1, len2, len, i, carry, digit1, digit2, *result, d = 0;

	a = argv[1], b = argv[2];
	if (argc != 3 || !check(a) || !check(b))
		err();
	len1 = _len(a);
	len2 = _len(b);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = a[len1] - '0';
		carry = 0;
		for (len2 = _len(b) - 1; len2 >= 0; len2--)
		{
			digit2 = b[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			d = 1;
		if (d)
			_putchar(result[i] + '0');
	}
	if (!d)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
