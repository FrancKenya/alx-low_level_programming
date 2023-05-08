#include "main.h"
#include <fcntl.h>
#include <stdio.h>

#define BUFSIZE 1024

/**
* print_error - used to print standard errors
* @filename: name of the file used
* @fd: file descriptor
* @msg: message
* Return: void
*/
void print_error(char *msg, char *filename, int fd);
/**
* main - fuction that is used to copy content
* @argc: argument count
* @argv: argument vector
* Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int f_from, f_to, rt, nread;
	char buf[BUFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	f_from = open(argv[1], O_RDONLY);
	if (f_from == -1)
	{
		print_error("Error: Can't read from file", argv[1], f_from);
		exit(98); }
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f_to == -1)
	{
		print_error("Error: Can't write to", argv[2], f_to);
		exit(99); }
	while ((nread = read(f_from, buf, BUFSIZE)) > 0)
	{
		rt = write(f_to, buf, nread);
		if (rt == -1)
		{
			print_error("Error: Can't write to", argv[2], f_to);
			exit(99); }
	}
	if (nread == -1)
	{
		print_error("Error: Can't read from file", argv[1], f_from);
		exit(98); }
	rt = close(f_from);
	if (rt == -1)
	{
		print_error("Error: Can't close fd", argv[1], f_from);
		exit(100); }
	rt = close(f_to);
	if (rt == -1)
	{
		print_error("Error: Can't close fd", argv[2], f_to);
		exit(100); }
	return (0);
	}
/**
* print_error - used to print standard errors
* @filename: name of the file used
* @fd: file descriptor
* @msg: message
* Return: void
*/

void print_error(char *msg, char *filename, int fd)
{
	dprintf(STDERR_FILENO, "%s %s", msg, filename);
	if (fd != -1)
	{
		dprintf(STDERR_FILENO, " (fd=%d)", fd);
	}
	dprintf(STDERR_FILENO, "\n");
}
