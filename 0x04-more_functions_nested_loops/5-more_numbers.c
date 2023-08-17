#include"main.h"

/**
 * more_numbers - print 0 - 14 ten times and you
 *		can only use _putchar three times
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int num, digit, count;

	for (digit = 0; digit < 10; digit++)
	{
		for (num = 0; num < 15; num++)
		{
			count = num;
			if (num > 9)
			{
				_putchar(1 + 48);
				count = num % 10;
			}
			_putchar(count + 48);
		}
		_putchar('\n');
	}
}
