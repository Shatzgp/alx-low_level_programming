#include “main.h”
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer – Allocates 1024 bytes for a buffer.
 * @file: file name the buffer is storing chars on.
 *
 * Return: pointer to the newly allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			" error: cant write to %s\n ", file);
			exit(99);
	}
	return(buffer);
}

/**
 *close_file – close file descriptor.
 *@fd: file descriptor to be closed.
 */
void close_file(int fd)
{
	int p;

	p = close(fd);
	if (p == -1)
	{
		dprintf(STDERR_FILENO, " error: can’t close fd %d\n ", fd);
		exit(100);
	}
}

/**
 * main – Copies the content of a file to one another.
 * @argc: Num of arguments supplied to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: success is 0
 *
 * Description: if argument count is incorrect – exit code 97
 *		if file_from doesn’t exist or read – exit code 98.
 *		if file_to can not be created or written to – exit code 99.
 *		if file_to or file_from can not be closed – exit code 100
 */
int main(int argc, char *arg[])
{
	int from, to, r, w;
	char *buf;

	if (arg != 3)

	{
		dprintf(STDERR_FILENO, " Usage: cp file_from file_to\n ")
		exit(97);
	}
	w = write(to, buf, r);
	if (to == -1 || w == -1 +)
	{
		dprintf(STDERR_FILENO,
			" error: can’t write to %s\n ", argv[2]);
		free(buf);
		exit(99);
	}
	r = read(from, buf, 1024);
	to = open(argv[2], O_WRONGLY | O_APPEND);
	} while (r  > 0);
	free(buf);
	close_file(from);
	close_file(to);

	return (0);
}
