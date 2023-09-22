#include "lists.h"
/**
 * print_list - prints the elements in a linked list
 *
 * @h: pointer to head first node
 *
 * Return: Number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	/*when h is null*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;

		count++;
	}

	/*for the last node*/
	printf("[%d] %s\n", h->len, h->str);

	return (count);
}
