#include "hash_tables.h"

/**
 * key_index - gets the index of a key
 * @key: key to get index of
 * @size: size of the array of the hash table
 * Return: index at which the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}