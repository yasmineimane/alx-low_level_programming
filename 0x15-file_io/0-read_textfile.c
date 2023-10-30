#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX.
 * @filename: file name (string pointer)
 * @letters: the number of letters it should read and print
 *
 * Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buff;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	nrd = read(fd, buff, letters);
	nwr = write(STDOUT_FILENO, buff, nrd);

	close(fd);
	free(buff);

	return (nwr);
}
