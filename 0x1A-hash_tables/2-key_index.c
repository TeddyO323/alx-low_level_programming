#include <stdio.h>
#include "hash_tables.h"

/**
 *key_index - Calculate the index to the key
 *@key: key
 *@size: Size of the table
 *Return: Index to position the key in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int hash_key = hash_djb2(key);
	int index = (hash_key % size);

	return (index);
}
