#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - functions that frees a single linked list
 * @head: pointer to the head of a singly linked list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *p_head;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		p_head = *head;
		*head = (*head)->next;
		free(p_head);
	}

	*head = NULL;
}
