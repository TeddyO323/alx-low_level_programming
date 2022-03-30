#include "main.h"
/**
 * _sqrt - find two iquals numbers multiplied iqual to n
 * @counter: number to multiply
 * _sqrt_recursion - function that returns the natural square root
 * of a number
 * @n: number
 * Return: square root of n and -1 if n does not have a natural square
 */
int _sqrt(int n, int counter)
{
	if (n == counter * counter)
	{
		return (counter);
	}
	else if (n < counter * counter)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, counter + 1));
	}
}
/**
 * _sqrt_recursion - natural square root
 * @n: number
 * Return: square root value
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (_sqrt(n, 1));
	}
}
