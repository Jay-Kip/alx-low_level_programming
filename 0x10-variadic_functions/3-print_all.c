#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
* print_all - function that prints anything
* @format: arguements passed
*
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s = "";
	char *d = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'i':
					printf("%s%d", d, va_arg(list, int));
					break;
				case 'c':
					printf("%s%c", d, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", d, va_arg(list, double));
					break;
				case 's':
					s = va_arg(list, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", d, s);
					break;
				default:
					i++;
					continue;
			}
			d =  ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
