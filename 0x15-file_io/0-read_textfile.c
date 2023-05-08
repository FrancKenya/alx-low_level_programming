#include "main.h"
#include <fcntl.h>
#include <stdlib.h>

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @letters: number of letters it should read and print
* @filename: name of textfile
* Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp, num_bytes_read, num_bytes_written;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fp);
		return (0);
	}
	num_bytes_read = read(fp, buffer, letters);
	num_bytes_written = write(STDOUT_FILENO, buffer, num_bytes_read);

	free(buffer);
	close(fp);
	return (num_bytes_written);
}
