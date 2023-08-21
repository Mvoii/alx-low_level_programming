#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int len = 0;
	for (*s; *s != '\0'; *s++)
	{
		len++;
	}
	return (len);
}
