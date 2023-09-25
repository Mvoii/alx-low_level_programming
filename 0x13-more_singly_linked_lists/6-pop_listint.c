#include "lists.h"

/**
 * pop_listint - deletes head of the node
 *
 * @head: pointer to the first node in the list
 *
 * Return: the head's node's data (n)
*/
int pop_listint(listint_t **head)
{
	int first_node;
	listint_t *tmp, *next;

	/*if list is empty return 0*/
	if (*head == NULL)
		return (0);

	/*set head addr to tmp*/
	tmp = *head;
	/*get addr of next node*/
	next = tmp->next;
	/*get element of first node*/
	first_node = tmp->n;

	/*free first node*/
	free(tmp);

	/*set head to second node*/
	*head = next;

	/*return element of first node*/
	return (first_node);
}
