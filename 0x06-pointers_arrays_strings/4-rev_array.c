#include "main.h"

/**
 * reverse_array - a function that reverses the
 *                content of an array of integers
 *
 * @a: pointer to int array
 * @n: is the number of elements to swap
 *
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int start = 0;

	int end = n - 1;

	for (start; start < end; start++)
	{
		int tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;

		end--;
	}
}
