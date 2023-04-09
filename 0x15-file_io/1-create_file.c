#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file to create.
 * @text_content: txt to be written.
 *
 * Return: -1 if it fails, 1 if success
 */
int create_file(const char *filename, char *text_content)
{
	int p, h, len = 0;

	if (filename == NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	p = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	h = write(p, text_content, len);
	if (p == -1 || h == -1)
		return (-1);
	close(p);

	return (1);
}
