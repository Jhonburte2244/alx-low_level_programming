#include "main.h"

/**
 * read_textfile: Reads all text file then prints a letters
 * @filename: Filename of the file
 * @letters: A given Numbers of Letters printed at a Time.
 *
 * Return: Print amount of letters at a time. 
 *        :If function fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
	{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
