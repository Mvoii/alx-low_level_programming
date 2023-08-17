#include"main.h"

/**
 * more_numbers - print 0 - 14 ten times and you
 *		can only use _putchar three times
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int num, digit;

	for (digit = 0; digit < 10; digit++)
	{
		for (num = 0; num < 14; num++)
		{
			_putchar(num + 48);
		}
		_putchar('\n');
	}
	_putchar('\n');
