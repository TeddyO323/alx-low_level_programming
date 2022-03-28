#include "main.h"

/**
 * _memset - function fills the first memory with a constant value
 * @s: buffer to be filled and returned
 * @b: constant value
 * @n: bytes of the memory
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int index;

	for (index = 0; n > 0; index++)
	{
		s[index] = b;
		n--;
	}
	return (s);
}
