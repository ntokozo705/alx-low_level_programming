#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: The name of the file
 * @text_content: The content of the file
 *
 * Return: file created.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int nlett, rdwr;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nlett = 0; text_content[nlett]; nlett++)
		rdwr = write( fd, text_content, nlett);

	if (rdwr == -1)
		return (-1);

	close(fd);

	return (1);
}

