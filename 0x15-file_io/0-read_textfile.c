#include "main.h"
/**
 * @filename - name of file to be read
 * @letters - number of letters to be printed
 * Return: number of letters to be printed
*/ 
ssize_t read_textfile(const char *filename, size_t letters)
{
	int chars_to_print;
	ssize_t printed_chars;
	FILE *fileName

	if (filename == NULL)
		return (0);

	fileName = fopen(filename, "r");

	if (fileName == NULL)
		return(0);

	chars_to_print = fgetc(fileName);

	while (printed_chars <= letters)
	{
		if (printed_chars == letters || chars_to_print == -1)
			break;
		if (write(STDOUT_FILENO, &chars_to_print, 1) == -1)
			return (0);
		printed_chars++;
		chars_to_print = fgetc(fileName);
	}

	fclose(fileName);
	return (printed_chars);
}
