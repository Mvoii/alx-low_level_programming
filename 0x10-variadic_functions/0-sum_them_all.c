#include <stdarg.h>

/**
 * sum_them_all - adds all its parameters
 *
 * @n: start of input variables
 *
 * Return: the sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int param, sum = 0;

	/* initiate the argument list from start */
	va_start(ap, n);

	/* iterate through all parameter velues*/
	for (param = 0; param < n; param++)
		/* get the next parameter value and add it to sum */
		sum += va_arg(ap, int);
	/* clean up*/
	va_end(ap);

	return (sum);
}
