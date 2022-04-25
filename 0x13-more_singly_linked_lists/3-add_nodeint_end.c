#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a
 * linked list
 * @head: pointer to the head of a linked list
 * @n: number to add in the node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *prev;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	prev = *head;
	while (prev->next != NULL)
		prev = prev->next;

	prev->next = new;
	return (new);
}
