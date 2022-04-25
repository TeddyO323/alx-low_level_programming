#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of
 * a linked list.
 * @head: pointer to the head of a linked list
 * @index: index of the current node
 * Return: the nth node of a linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *p_head = head;

	if (p_head == NULL)
		return (NULL);

	while (p_head != NULL)
	{
		if (count == index)
			return (p_head);
		p_head = p_head->next;
		count++;
	}
	return (NULL);
}
