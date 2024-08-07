#include "search_algos.h"

/**
* binary_search - just go check out david malans video
* @array: pointer to the first element of the arr
* @size: number of elements in the arr
* @value: num to be searched for
* Return: -1 if not found, index of value
*/

int binary_search(int *array, size_t size, int value)
{
	size_t i, right, left;

	if (array == NULL)
	{
		return (-1);
	}

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
      		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;

		if (array[i] == value)
      		{
      			return (i);
		}

		if (array[i] > value)
		{
			right = i - 1;
		}
      		else
		{
			left = i + 1;
		}
	}
	return (-1);
}

