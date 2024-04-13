#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *temp_node = NULL;
    char *comma_flag = "";
    unsigned long int index = 0;

    if (ht)
    {
        printf("{");
        while (index < ht->size)
        {
            temp_node = ht->array[index];

            while (temp_node)
            {
                printf("%s", comma_flag);
                comma_flag = ", ";

                if (temp_node->key)
                    printf("'%s': '%s'", temp_node->key, temp_node->value);
                temp_node = temp_node->next;
            }
            index++;
        }
        printf("}\n");
    }
}