#ifndef _VARIADIC_FUNCTION_H_
#define _VARIADIC_FUNCTION_H_
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct check - type struct
 * @type: The operator type
 * @funtion_printf_anything: The function associated
 */
typedef struct check
{
	char *type;
	void (*funtion_printf_anything)();
} check;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_int(va_list list);
void print_float(va_list list);
void print_char(va_list list);
void print_string(va_list list);
#endif /*_VARIADIC_FUNCTION_H_*/
