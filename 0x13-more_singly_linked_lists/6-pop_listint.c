#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a
 * singly linked list
 * @head: pointer to the head of a singly linked list
 * Return: heads node's data or 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *p_head = *head;
	int n;

	if (*head == NULL)
		return (0);

	n = p_head->n;
	*head = p_head->next;
	free(p_head);

	p_head = *head;
	return (n);
}
