#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: Name of the file
 * @text_content: String to write to the file
 *
 * Return: 1,
 *	-1 if fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wed, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
		while (*(text_content + len))
			len++;
	else
	{
		close(fd);
		return (1);
	}

	wed = write(fd, text_content, len);
	if (wed < 0)
		return (-1);
	close(fd);
	return (1);
}
