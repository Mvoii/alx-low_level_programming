#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - iterates through all elements of an array passing a function
 * @array: a pointer to an array
 * @size: size of the array
 * @action: is  pointer to a function
 * return: nothing
 * */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	/*chack for NULL characters*/
	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
