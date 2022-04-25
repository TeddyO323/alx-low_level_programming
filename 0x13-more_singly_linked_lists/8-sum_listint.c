#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of a
 * linked list.
 * @head: pointer to the head of a linked list
 * Return:  the sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	listint_t *p_head = head;
	int sum = 0;

	if (p_head == NULL)
		return (0);

	while (p_head != NULL)
	{
		sum += p_head->n;
		p_head = p_head->next;
	}
	return (sum);

}
