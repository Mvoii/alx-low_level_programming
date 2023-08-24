#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0;

	int len2;

	/*find length of string dst*/
	while (dest[len1])
		len1++;

	/*for loop to append characters*/
	for (len2 = 0; len2 < n && src[len2] != '\0'; len2++)
		dest[len1 + len2] = src[len2];

	/*add null character at end*/
	dest[len1 + len2] = '\0';

	return (dest);
}
