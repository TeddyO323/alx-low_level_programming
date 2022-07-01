#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 *hash_table_get - Get the value of a key in array
 *@ht: header of the table
 *@key: key
 *Return: The key's value or NULL if the key doesn't exit
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int size = ht->size;
	unsigned long int index = key_index((const unsigned char *) key, size);
	hash_node_t *aux;

	if (!ht->array[index])
		return (NULL);
	aux = ht->array[index];
	while (aux)
	{
		if (aux->key == (char *) key)
			return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}
