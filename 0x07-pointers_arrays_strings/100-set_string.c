#include "main.h"
/**
* set_string - function that sets the value of a pointer to a char
* @s:  pointer to the address of string s
* @to: pointer to modify
*
* Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
