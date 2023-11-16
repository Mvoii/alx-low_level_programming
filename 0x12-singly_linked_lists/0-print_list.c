#include "lists.h"

/**
 * print_list - prints out the contents of the lists
 *
 * Description: long description
 *
 * @h: argument_1 description
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t number_of_nodes;

	number_of_nodes = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("%s\n", "[0] (nil)");
		number_of_nodes++;
		h = h->next;
	}

	return (number_of_nodes);
}
