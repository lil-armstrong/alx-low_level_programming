
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to stdout
 * @filename: file name to read from
 * @letters: number of letters it should read and print
 * Return: 0 (fail), number (success)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	ssize_t r, w;
	char *buffer;

	if (filename != NULL)
	{
		buffer = malloc(sizeof(char) * letters);
		if (buffer != NULL)
		{
			fd = open(filename, O_RDONLY);

			r = read(fd, buffer, letters);
			w = write(STDOUT_FILENO, buffer, r);

			if (fd == -1 || r == -1 || w == -1)
			{
				free(buffer);
				return (0);
			}
			free(buffer);
			close(fd);
			return (w);
		}
	}
	return (0);
}
