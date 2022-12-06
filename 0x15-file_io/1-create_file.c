#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to file
 * Return: 1 (success), -1 (fail)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename != NULL)
	{
		fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);

		if (text_content != NULL)
			w = write(fd, text_content, _strlen(text_content));

		if (fd == -1 || w == -1)
			return (-1);

		close(fd);
		return (1);
	}
	return (-1);
}

/**
 * _strlen - gets string length
 * @str: NULL terminated character string
 * Return: int
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}
