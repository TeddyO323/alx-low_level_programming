#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_int - print int type element from va_list
 * @list: va_list passed to function
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_float - print float type element from va_list
 * @list: va_list passed to function
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_char - print char type element from va_list
 * @list: va_list passed to function
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_string - print string element from va_list
 * @list: va_list passed to function
 */
void print_string(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}




/**
 * print_all - print anything passed if char, int, float, or string.
 * @format: string of formats to use and print
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list args;
	char *separation;

	check storage[] = {
		{ "c", print_char },
		{ "f", print_float },
		{ "s", print_string },
		{ "i", print_int }
	};

	i = 0;
	separation = "";
	va_start(args, format);

	while (format != NULL && format[i / 4] != '\0')
	{
		j = i % 4;
		if (storage[j].type[0] == format[i / 4])
		{
			printf("%s", separation);
			storage[j].funtion_printf_anything(args);
			separation = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
