#include "main.h"
#include <fcntl.h>
#include <string.h>

/**
* create_file - creates a file and writes specified content to it
* @filename: the name of the file to create
* @text_content: content to write to the file
*
* Return: 1 (success), -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd, result;
	size_t len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	else
	{
		result = write(fd, text_content, len);
	}
	if (result == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
