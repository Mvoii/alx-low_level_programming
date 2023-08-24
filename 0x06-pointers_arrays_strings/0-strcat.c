#include "main.h"

/**
 * _strcat - function that concatenates
 *          two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
    int len1, len2;

    len1 = 0;

    len2 = 0;

    /* find length of string dest*/
    while (dest[len1])
        len1++;

	/*create a for loop that appends the src string elements to dest*/
	for (len2; src[len2]; len2++)
        dest[len1++] = src[len2];

	/*returns dest*/
	return (dest);
}
