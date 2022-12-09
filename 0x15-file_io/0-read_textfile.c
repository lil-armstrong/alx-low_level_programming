
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
	ssize_t r_bytes, w_bytes;
	char *buffer;

	if (filename != NULL)
	{
		buffer = malloc(sizeof(char) * letters + 1);
		buffer[letters] = '\0';
		if (buffer != NULL)
		{
			fd = open(filename, O_RDONLY);

			if (fd == -1)
				return (0);

			r_bytes = read(fd, buffer, letters);

			if (r_bytes == -1)
				return (0);

			w_bytes = write(STDOUT_FILENO, buffer, r_bytes);

			if (w_bytes == -1 || w_bytes != r_bytes)
				return (0);

			free(buffer);
			close(fd);
			return (w_bytes);
		}
	}
	return (0);
}
