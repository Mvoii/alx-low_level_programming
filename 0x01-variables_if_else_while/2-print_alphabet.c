#include <stdio.h>

/**
	* main - Entry point
	*
	* Description: print alphabet in lowercase then in uppercase
	*
	* Return: Always 0 (Success)
*/
int main(void)
{
	char letter = 'a';

	/*prints a-z*/
	while(letter <= 'z')
	{
		putchar(letter);
		++letter;
	}
	putchar('\n');

	return (0);
}
