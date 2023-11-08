#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 *  * _putchar - writes character
 *   * @c: The character to print
 *    * Return: on success 1
 *     * On error, -1 is returned
 *      **/

int _putchar(char c)
{
        return (write(1, &c, 1));
}
