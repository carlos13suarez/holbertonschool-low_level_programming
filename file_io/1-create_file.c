#include "main.h"

/**
 *
 */
size_t _strlen(char *str)
{
	int len = 0;
	while (str[len])
		len++;
	return (len);
}


/**
 * create_file - creates a file
 *
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		perror("open\n");
		return (-1);
	}

	write(fd, text_content, _strlen(text_content));
	if (close(fd) == -1)
	{
		perror("close\n");
		return (0);
	}

	return (1);
}
