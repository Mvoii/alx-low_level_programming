#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - return index place if comparison = true, else -1
 * @array: size of elements in the array
 * @size: size of array
 * @cmp: pointer to a function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/*check for NULL character*/
	if (array == NULL || size <= 0 || cmp == NULL)
		return -1;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
