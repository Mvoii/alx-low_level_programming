#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *tmp, *node;
    hash_table_t *head = ht;
    unsigned long int i;

    for (i = 0; i < ht->size; i++)
    {
        if (ht->array[i] != NULL)
        {
            node = ht->array[i];
            while (node != NULL)
            {
                tmp = node;
                node = node->next;
                free(tmp->key);
                free(tmp->value);
                free(tmp);
            }
        }
    }
    free(head->array);
    free(head);
}