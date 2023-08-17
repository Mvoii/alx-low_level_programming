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
		for (num = 1; num <= n; num++)
		{
			for (spaces = 1; spaces <= num; spaces++)
			{
				_putchar(' '); /*ascii value of blank space*/
			}
			_putchar(92); /*ascii value of slash*/
			_putchar('\n');
		}
	}
}
