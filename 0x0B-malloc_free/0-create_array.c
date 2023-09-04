#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *arr = malloc(sizeof(char) * size);

	for (int i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
