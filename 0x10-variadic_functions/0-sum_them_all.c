#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - function to sum all numbers
* @n: number of numbers passes
* @...: numner of numbers passed
* Return: if n == 0 return 0
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum;
	va_list ap;

	sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);

		va_end(ap);
	}

	return (sum);
}
