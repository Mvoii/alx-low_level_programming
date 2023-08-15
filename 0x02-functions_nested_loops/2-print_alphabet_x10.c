#include "main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{
	int num, ch;

	for (num = 0; num < 10; num++)
	{
	    for (ch = 'a'; ch <= 'z'; ch++)
		{
	    	_putchar(ch);
		}
		_putchar('\n');
	}
}		
