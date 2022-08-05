#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_numbers - prints numbers, new line.
*@separator: Variable type of const char ','.
*@n:Variable type  constt nsigned int (size)
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;

	unsigned int i;


	va_start(list, n);

	for (i = 0; i < n ; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
