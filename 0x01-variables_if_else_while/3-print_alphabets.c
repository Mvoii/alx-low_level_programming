#include <stdio.h>

int main(void)
{
	/*prints in smalll letters*/
	for (char ch = 'a'; ch<= 'z'; ch++)
    	{
			putchar(ch);
		}

	/*prints in caps*/
	for (char ch = 'A'; ch <= 'Z'; ch++)
		{
			putchar(ch);
		}
	putchar('\n');
	
	return (0);
}
