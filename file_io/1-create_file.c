#include "main.h"

/**
 * _strlen - returns length of str
 *
 * @str: string.
 *
 * Return: length
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
 * Return: 1 on success, -1 on failure (file can not be created, file can not
 * be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0, num_letters = 0;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT, mode);
		if (fd == -1)
			return (-1);
		return (1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
		return (-1);

	num_letters = write(fd, text_content, _strlen(text_content));

	if (num_letters == -1)
		return (-1);

	if (close(fd) == -1)
		return (0);

	return (1);
}
