#include <fcntl.h>
#include <string.h>
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
	int fd, bytes_written; 
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd == -1)
	{
		return -1;
	}
        bytes_written = write(fd, str,strlen(str));
	close(fd);
	if (bytes_written == -1)
	{
		return -1;
	}

	return -1;
}
