#include <stdio.h>
#include <stdlib.h>
/**
* main -Entry point
*
* Return: zero
*/
int main(void)
{
	int a;
	char b;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}

