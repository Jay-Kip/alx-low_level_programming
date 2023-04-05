#include "main.h"
/**
* squareroot- entry of the square root function
* @n: incoming integer
* @j: iterarting number
* Return: squareroor
*/
int squareroot(int n, int j)
{
	int x = j * j;

	if (x  > n)
	{
		return (-1);
	}
	if (x == n)
	{
		return (j);
	}

	return (squareroot(n, j + 1));
}

/**
* _sqrt_recursion - entry of the square root function
* @n: incoming integer
* Return: squareroor
*/
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
	return (squareroot(n, 1));
	}
}

