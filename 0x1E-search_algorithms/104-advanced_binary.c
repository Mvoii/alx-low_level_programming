#include  "search_algos.h"

/**
* advanced_binary_recursive - recur binary searches
* @array: arr
* @right: starting idx
* @left: ending idx
* @value: find me
* Return: -1 if 404, idx
*/

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");

	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;

	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);

	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
* advanced_binary - docs
* @array: arr
* @size: size
* @value; find me
* Return: -1 if 404, value
*/

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}

