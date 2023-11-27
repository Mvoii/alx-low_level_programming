#include "main.h"

/**
 * @filename - name of file to be read
 *
 * @letters - number of letters to be printed
 *
 * Return: number of letters to be printed
 *
*/ 


ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fd;
	ssize_t written, readfile;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	readfile = read(fd, buff, letters);

	written = write(fd, buff, letters);

	if (fd == -1 || readfile == -1 || written != readfile)
	{
		free(buff);
		close(fd);
		return (0);
	}

	free(buff);

	close(fd);

	return (written);
}
