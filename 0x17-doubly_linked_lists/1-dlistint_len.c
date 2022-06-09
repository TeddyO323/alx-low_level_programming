#include "lists.h"
#include <stdio.h>
/**
 *dlistint_len - calculate Length of the list
 *@h: Header of the list
 *Return: Length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;
	dlistint_t *aux = (dlistint_t *) h;

	if (h == NULL)
		return (0);
	while (aux != NULL)
	{
		aux = aux->next;
		len++;
	}
	return (len);
}
