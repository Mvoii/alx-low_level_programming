#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
*/

void print_diagonal(int n)
{
	int num, spaces;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (num = 0; num < n; num++)
		{
			for (spaces = 0; spaces <= num; spaces++)
				_putchar(32); /*ascii value of blank space*/
			_putchar(92); /*ascii value of slash*/
			_putchar('\n');
		}
	}
}
