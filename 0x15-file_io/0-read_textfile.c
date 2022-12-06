
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to stdout
 * @filename: file name to read from
 * @letters: number of letters it should read and print
 * Return: 0 (fail), number (success)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd, i;
	ssize_t r, w;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename != NULL)
	{
		if (buffer != NULL)
		{
			fd = open(filename, O_RDONLY, 0600);

			if (fd == -1)
				return (0);

			r = read(fd, buffer, letters);
			w = write(STDOUT_FILENO, buffer, r);

			free(buffer);
			close(fd);
			return (w);
		}
	}
	return (0);
}
