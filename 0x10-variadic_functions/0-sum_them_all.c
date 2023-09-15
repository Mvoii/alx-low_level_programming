#include "variardic_functions.h"
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
	unsigned int parameter, sum = 0;

	/*initialize the arg list*/
	va_start(ap, n);

	/*iterate through all the parameter values*/
	for (parameter = 0; parameter < n; parameter++)
		/*get next parameter value and add it to the sum*/
		sum += va_arg(ap, int);
	/*clean up*/
	va_end(ap);

	return (sum);
}
