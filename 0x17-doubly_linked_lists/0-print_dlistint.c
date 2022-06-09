#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 *@h:header of list
 * Return: Return total of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	for (count = 0 ; h; count++, h = h->next)
		printf("%d\n", h->n);

	return (count);
}
