#include <stddef.h>
#inlcude "function_pointers.h"

/**
 * array_iterator - short description
 *
 * Description: long description
 *
 * @array: argument_1 description
 * @size: argument_2 description
 * @action: argument_3 description
 *
 * Return: void
 */

void array_iterator(int *array, size_t_size, void (*action)(int))
{
	unsigned int index;

	if (array != '\0' && size > '\0' && action != '\0')
	{
		for (index = 0; index < size; index++)
			action(array[index]);
	}
}
