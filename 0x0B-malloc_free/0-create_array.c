#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *arr = malloc(sizeof(char) * size);

	int i = 0;

	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
