#include "main.h"
/**
* is_prime_number - entry point of is prime function
* @n: incoming integer
* @a: itarating number
* Return: 1 if prime and 0 if not prime
*/

int func(int n, int a);

int is_prime_number(int n)
{
	return (func(n, 1));


}

/**
* func - enrty point of "func" function
* @n: incoming integer
* @a: itearting number
* Return: 1 or 0
*/
int func(int n, int a)
{
	if (n <= a)
	{
		return (0);
	}
	else if (n % a == 0 && a > 1)
	{
		return (0);
	}
	else if ((n / a) < a)
	{
		return (1);
	}
	return (func(n, a + 1));
}
