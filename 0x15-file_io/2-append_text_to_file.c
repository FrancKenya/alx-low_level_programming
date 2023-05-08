#include "main.h"
#include <fcntl.h>

/**
* append_text_to_file - appends text at the end of a file
* @filename: name of the file
* @text_content: string to append
* Return: 1 (success), or -1 if fail
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, len;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
