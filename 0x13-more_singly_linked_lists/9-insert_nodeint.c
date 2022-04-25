#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of a linked list
 * @idx: index of nodes in the linked list
 * @n: number to insert
 * Return: the address of the new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p_head = *head, *new;
	unsigned int i = 1;

	if (head == NULL)
		return (NULL);

	while (i < idx)
	{
		if (p_head != NULL)
			p_head = p_head->next;
		else
			return (NULL);
		i++;
	}

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else if (p_head)
	{
		new->next = p_head->next;
		p_head->next = new;
	}
	return (new);
}
