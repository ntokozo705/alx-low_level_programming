#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Read and print to POSIX standard output
 *@filename- A pointer
 * @letters- number of letters printed
 *
 *
 * Return: Printed letters.
 */

size_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buff;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	nrd = read(fd, buff, letters);
	nwr = write(STDOUT_FILENO, buff, nrd);

	close(fd);
	free(buff);

	return (nwr);
}
