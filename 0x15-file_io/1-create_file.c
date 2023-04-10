#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create.
 * @content: the content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc;
	int num_chars;
	int result;

	if (!filename)
		return (-1);

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_desc == -1)
		return (-1);

	if (!content)
		content = "";

	for (num_chars = 0; content[num_chars]; num_chars++)
		;

	result = write(file_desc, content, num_chars);

	if (result == -1)
		return (-1);

	close(file_desc);

	return (1);
}
