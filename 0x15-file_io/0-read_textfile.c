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
	char *buffer = malloc((sizeof(char) * letters) + 1);

	if (filename == NULL)
		return (0);

	if (buffer != NULL)
	{
		fd = open(filename, O_RDONLY, 0600);

		if (fd == -1)
			return (0);

		read(fd, buffer, letters);
		buffer[letters + 1] = '\0';

		for (i = 0; buffer[i] != '\0'; ++i)
		{
			_putchar(buffer[i]);
		}
		_putchar(10);

		free(buffer);
		close(fd);
		return (i);
	}
	return (0);
}
