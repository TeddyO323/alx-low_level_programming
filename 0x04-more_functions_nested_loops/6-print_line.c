#include "main.h"
/**
* print_line - draws a straight line in the terminal
* @n: is the number of times the character '_'
*/
void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
		_putchar('_');
	_putchar('\n');
}
