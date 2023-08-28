#include "main."
char *_strchr(char *s, char c)
{
	unsigned int i;
	char *f;

	for (i = 0; i < (strlen(s) + 1); i++)
	{
		if (c == s[i])
		{
            for (int j = 0; i < strlen(s); j++)
            {
                f[j] = s[i];
                i++;
            }
            return (f);
        }
    }
    return ('\0';
}
