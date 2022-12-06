
#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to file
 * Return: 1 (success), -1 (fail)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	char *err;

	if (filename != NULL)
	{
		fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

		if (fd == -1)
		{
			err = "File cannot be created, written to or truncated";
			write(STDERR_FILENO, err, strlen(err));
			return (-1);
		}

		if (text_content != NULL)
			write(fd, text_content, strlen(text_content));
		close(fd);
		return (1);
	}
	return (-1);
}
