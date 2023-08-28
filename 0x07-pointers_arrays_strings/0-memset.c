/**
 * fills the memory address wit const byte
 * returns a pointer to the filled mem
*/

char *_memset(char *s, char b, unsigned int n)
{
    int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
