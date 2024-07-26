#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: text file to read
 * letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print.
 * if the file can not be opened or read, returns 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_letters = 0, dummy = 0;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0644);
	if (fd == -1)
	{
		perror("open\n");
		return (0);
	}

	buffer = malloc(letters * sizeof(char));
	if (!buffer)
	{
		perror("malloc\n");
		return (0);
	}

	num_letters = read(fd, buffer, letters);
	if (num_letters == -1)
	{
		perror("read\n");
		return (0);
	}

	dummy = write(1, buffer, letters);
	if (dummy == -1)
	{
		perror("write\n");
		return (0);
	}

	if (close(fd) == -1)
	{
		perror("close\n");
		return (0);
	}

	free(buffer);

	return (num_letters);
}
