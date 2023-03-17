#include <stdio.h>
/**
* main -Entry point
*
* Return: zero
*/
int main(void)
{
	char i;
	char c;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
