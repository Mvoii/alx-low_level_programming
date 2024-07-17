#include "search_algos.h"

/**
* linear_search: searches for vallue... you know what this is
* @array: place to be searched
* @size: max num of elements in teh arr
* @value: element being searched
* Return: idx of the value, -1 if not found
*/

int linear_search(int * array, size_t size, int value)
{
	size_t i = 0;

	/* checks if arr is null */
	if (array == NULL)
	{
		return (-1);
	}

	/* iterate theough arr*/
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
      		{
			return (i);
		}
	}
	return (-1);

}

