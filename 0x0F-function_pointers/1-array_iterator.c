#include "function_pointers.h"
#include <stdio.h>


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
