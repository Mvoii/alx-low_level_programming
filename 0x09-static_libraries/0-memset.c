/**
 * fills the memory address wit const byte
 * returns a pointer to the filled mem
*/

char *_memset(char *s, char b, unsigned int n)
{
	/**
	 * declare an unsigned int
	 * because we are storing a
	 * value that will always be
	 * non-negative (zero or positive)
	*/
    unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
