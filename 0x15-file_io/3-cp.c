
#include "main.h"

#define INCOMPL_ARG 97
#define NOEXIST_FILE_FROM 98
#define NO_WRT_FILE_TO 99
#define NO_CLOSE_FD 100
#define BUFFER_SIZE 1024
#define W_MODE 0664

/**
 * main - Main program
 * @argc: arg count
 * @argv: argument list
 * Return: 0 (success), 97 [INCOMPL_ARG],
 * 98[NO_EX_FILE_FROM]
 * 99 [NO_WRT]
 * 100 [NO_CLOSE]
 * (fail)
 */
int main(int argc, char *argv[])
{
	char *file_from, *file_to;
	int res;

	if (argc != 3)
	{
		printUsage();
	}

	file_from = argv[1];
	file_to = argv[2];

	printf("from: %s, to: %s\n", file_from, file_to);
	if (!strlen(file_to) || !strlen(file_from))
	{
		printUsage();
	}

	res = cp(file_from, file_to);

	return (0);
}

/**
 * printUsage - Prints program usage
 */
void printUsage(void)
{
	char *message;

	message = "Usage: cp file_from file_to\n";
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(INCOMPL_ARG);
}

/**
 * cp - copy content from source file to destination file
 * @file_from: source file
 * @file_to: destination file
 * Return: 1 (success) 0 (fail)
 */
int cp(char *file_from, char *file_to)
{
	int fd1, fd2;
	char *buffer;

	if (file_from != NULL && file_to != NULL)
	{
		fd1 = open(file_from, O_RDONLY);
		fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, W_MODE);

		if (fd1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(NOEXIST_FILE_FROM);
		}

		if (fd2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(NO_WRT_FILE_TO);
		}

		buffer = malloc(sizeof(char) * BUFFER_SIZE);
		read(fd1, buffer, BUFFER_SIZE);
		write(fd2, buffer, BUFFER_SIZE);

		free(buffer);
		closeFD(fd1);
		closeFD(fd2);

		return (1);
	}
	return (0);
}

/**
 * closeFD - closes a file descriptor
 * @fd: File descriptor
 */
void closeFD(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(NO_CLOSE_FD);
	}
}
