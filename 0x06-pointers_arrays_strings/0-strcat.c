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
    int len1 = 0, len2 = 0;

    /* find length of string dest*/
    while (dest[len1] != '\0')
    {
        len1++;
    }
    /*find length of string src*/
    while (src[len2] != '\0')
    {
        len2++;
    }
    /*create a for loop that appends the src string eleents to dest*/
    for (int i = 0; i <= len2; i++)
    {
        dest[len1++] = src[i];
    }

    /*returns dest*/
    return (dest);
}
