#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add element to
 * @key: key to add
 * @value: value to add
 * Return: 1 if successful, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index, i;
    hash_node_t *new_node = NULL;
    char *new_value = NULL;

    if (ht == NULL || key == NULL || value == NULL)
        return (0);

    new_value = strdup(value);
    if (new_node == NULL)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);

    for (i = index; ht->array[i]; i++)
    {
        if (strcmp(ht->array[i]->key, key) == 0)
        {
            free(ht->array[i]->value);
            ht->array[i]->value = new_value;
            return (1);
        }
    }
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
    {
        free(new_value);
        return (0);
    }
    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0);
    }
    new_node->value = new_value;
    new_node->next = ht->array[index];
    ht->array[index] = new_node;
    return (1);
}