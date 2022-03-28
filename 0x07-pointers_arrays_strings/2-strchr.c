#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that locates a character in a string
 * @s: the string
 * @c: the character
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; *(s + index); index++)
	{
		if (*(s + index) == c)
			return (s + index);
	}
	if (*(s + index) == c)
		return (s + index);
	return (0);
}
