#include "search_algos.h"

/**
* jump_search - searches for a value in a sorted arr
* @array: arr
* @size: size of arr
* @value: value to search for
* Return: the first idx of the value in teh arr
*/

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump_step, prev_idx;

	if(array == NULL || size == 0)
		return (-1);

	jump_step = sqrt(size);

	for (i = prev_idx = 0; prev_idx < size && array[prev_idx] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", prev_idx, array[prev_idx]);
		i = prev_idx;
		prev_idx +=jump_step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, prev_idx);

	prev_idx = prev_idx < size - 1 ? prev_idx : size - 1;

	for (; i < prev_idx && array[i] < value; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}

