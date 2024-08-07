#include "search_algos.h"

/**
* jump_list - searched for a vaue in a sorted list usong a jump search
* @list: sll
* @size: num of nodes
* @value: find me
* Return: a pointer to the first node where teh value is located, or null
* if value is MIA or if list is a 404
*/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);
	
	step = 0;

	step_size = sqrt(size);

	for (node= jump = list; jump->index + 1 < size && jump->n < value;)
      	{
      		node = jump; 
      		
      		for (step += step_size; jump->index < step; jump = jump->next)
      		{
      			if (jump->index + 1 == size)
      				break;
		}
		
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

      	printf("Value found between indexes [%ld] and [%ld]\n", node->index, jump->index);

      	for (; node->index < jump->index && node->n < value; node = node->next)
      		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

      	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

      	return (node->n == value ? node : NULL);
}

