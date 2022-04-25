#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - print all the elements of a listint_t
 * singly linked list.
 * @h: singly linked list to print
 * Return: number of the elements in the singly linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *p_h;

	p_h = h;


	while (p_h != NULL)
	{
		printf("%d\n", p_h->n);
		p_h = p_h->next;
		i += 1;
	}
	return (i);
}
