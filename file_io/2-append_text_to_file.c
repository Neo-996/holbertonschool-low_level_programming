#include "main.h"

/**
 * append_text_to_file - Appends text to the end of the file.
 * @filename: Name of the file
 * @text_content: Text that should be appended
 *
 * Return: 1,
 *	-1 if fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wed, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (*(text_content + len))
			len++;
		wed = write(fd, text_content, len);
		if (wed < 0)
			return (-1);
	}
	else
		return (1);
	close(fd);
	return (1);
}
