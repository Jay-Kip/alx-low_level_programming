#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_strings - Prints strings, followed by a new line.
* @separator: string separatingnstrings
* @n: number of strings passed
* @...: number of strings.
*
* Description: If separator is NULL, string is not printed
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *k;
	unsigned int i;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		k = va_arg(str, char *);
		if (k == NULL)
			printf("(nil)");
		else
			printf("%s", k);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(str);
}
