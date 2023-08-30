#include "main.h"
/**
 * _puts_recursion - a function that pirnts a new line
 * @s: the string
 * 
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	/*code description*/
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
