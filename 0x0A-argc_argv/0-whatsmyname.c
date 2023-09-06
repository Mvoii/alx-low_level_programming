#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int i = 0;

	printf("%s\n", *argv[i]);
	return (0);
}
