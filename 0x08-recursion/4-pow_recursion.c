#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to raise
 * @y: power
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
 {
	if (n == 0)
	{
		return (1); /* x^0 is 1*/
	}
	else if (n < 0)
	{
		return (-1); /* Handling negative exponents*/
    }
	else
	{	
        return (x * _pow_recursion(x, y - 1)); /* Recursive case*/
    }
}
