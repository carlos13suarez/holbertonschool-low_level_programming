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
 *
 *
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, bytes_read, bytes_written;
	char buffer[1024];
	mode_t mode = 0664;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1 || argv[1] == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(fd1);
		exit(99);
	}

	while ((bytes_read = read(fd1, buffer, 1024)) > 0)
	{
		bytes_written = write(fd2, buffer, _strlen(buffer));
		if (bytes_written == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (close(fd1) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}

	if (close(fd2) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}

	return (0);
}
