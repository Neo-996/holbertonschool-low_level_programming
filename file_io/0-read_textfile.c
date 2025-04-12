#include "main.h"

/**
 * read_textfile - Reads the text file and prints it.
 * @filename: Name of the file.
 * @letters: Count of the letters.
 *
 * Return: Actual number of letters it read,
 *	0 if fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, red, wed;
	char *c;

	if (!filename)
		return (0);

	c = malloc(sizeof(char) * letters);
	if (c == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(c);
		return (0);
	}

	red = read(fd, c, letters);
	wed = write(STDOUT_FILENO, c, red);

	free(c);
	close(fd);
	return (wed);
}
