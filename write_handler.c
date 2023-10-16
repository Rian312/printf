#include "main.h"
#include <stddef.h>
#include <unistd.h>

/**
 * write_handler - writes a string to a file
 * @filename: the name of the file to write to
 * @str: the string to the file
 *
 * Return: 1 on success, -1 on error
 */
int write_handler(const char *filename, const char *str)
{
	int fd = open(filename, 0_WRONLY | 0_CREAT | 0_TRUNC, 0664);
	IF (fd == -1)
	{
		return -1;
	}

	int len = _strlen(str);
	int bytes written = write(fd, str, len);
	close(fd);
	if (bytes_written == -1)
	{
		return -1;
	}

	return -1;
}
