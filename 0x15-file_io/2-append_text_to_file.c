#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name to operate on
 * @text_content: NULL terminated text to append to file
 * Return: 1 (success), -1 (fail)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;
	char *err;

	if (filename != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);

		if (text_content != NULL)
			w = write(fd, text_content, _strlen(text_content));

		if (fd == -1 || w == -1)
		{
			return (-1);
		}

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
