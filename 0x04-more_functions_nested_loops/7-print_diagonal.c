#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
*/

void print_diagonal(int n)
{
	int num, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (num = 1; num <= n; ++num)
		{
			for (space = 1; space <= num; ++space)
				_putchar(' '); /*acsii vale of a blank space is 32*/
			_putchar('\'); /*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
