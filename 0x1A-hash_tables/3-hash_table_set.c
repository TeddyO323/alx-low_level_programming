#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 *is_key - if there are
 *@ht: Header of the table
 *@key: key
 *@value: Key's value
 *Return: 1 -> sucess or 0 -> fails
 */
int is_key(hash_table_t *ht, char *key, char *value)
{
	int i;
	hash_node_t *aux;

	for (i = 0; i < (int) ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			aux = ht->array[i];
			while (aux != NULL)
			{
				if (strcmp(aux->key, key))
				{
					aux->value = value;
					return (1);
				}
				aux = aux->next;
			}
		}
	}
	return (0);
}


/**
 *hash_table_set - create a new_node
 *@ht: Header of the table
 *@key: key
 *@value: Key's value
 *Return: 1 -> sucess or 0 -> fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	hash_node_t *new_node;
	char *value_copy, *key_copy;
	int size, index;

	if (ht == NULL)
		return (0);

	size = ht->size;
	index = key_index((const unsigned char *) key, size);

	value_copy = (char *) value;
	key_copy = (char *) key;

	new_node = malloc(sizeof(hash_node_t));

	if (key_copy == NULL || new_node == NULL)
		return (0);

	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = NULL;
	if (ht->array[index] != NULL)
		new_node->next = ht->array[index];

	ht->array[index] = new_node;
	return (1);
}
