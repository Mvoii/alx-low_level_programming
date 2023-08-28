#include "main.h"
/*
 * sets the memory address to a given address
 * returns (0)
*/
char *_memset(char *s, char b, unsigned int n)
{
    int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
}
