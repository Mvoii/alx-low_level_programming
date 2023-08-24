#include "main.h"

/**
 * _strncpy - A function that copies a string.
 *
 * @dest: pointer to destination input buffer
 * @src: pointer to source input buffer
 * @n: bytes of @src
 *
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int len2;

	/*using a for loop, copy te src to dest*/
	for (len2 = 0; len2 < n && src[len2] != '\0'; len2++)
		dest[len2] = src[len2];

	/*for when src to be copies id smaller than destination*/
	while (len2 < n)
	{
		dest[len2] = '\0';
		len2++;
	}
	return (dest);
}
