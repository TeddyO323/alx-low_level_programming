#include "main.h"
/**
 * prime_check - check if n is prime number
 * @n: number
 * @counter: counter
 * Return: 1 if the number is a prime
 */
int prime_check(int n, int counter)
{
	if (n % counter == 0)
	{
		return (0);
	}
	else if (n >= (counter + 1) * (counter * 1))
	{
		return (prime_check(n, counter + 1));
	}
	return (1);
}
/**
 * is_prime_number - function that returns 1 if the input integer is
 * a prime number, otherwise return 0
 * @n: number
 * Return: 1 if the number is a prime number otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (prime_check(n, 2));
}
