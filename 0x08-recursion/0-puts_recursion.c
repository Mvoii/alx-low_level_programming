#include "main.h"
/**
 * main - check the code
 * @char *s
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	/*code description*/
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
