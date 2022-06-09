#include "lists.h"

/**
 *sum_dlistint -Write a function that returns the sum of all the data (n)
 *@head: Variable type struct dlistint_t
 * Return: Return result of sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	for (sum = 0; head ; head = head->next)
		sum += head->n;

	return (sum);
}
