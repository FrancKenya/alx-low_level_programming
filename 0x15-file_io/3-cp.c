#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>

#define BUFFER_SIZE 1024
/**
* errorExit - handles error in the main code
* @message: pointer to message
* @exitCode: integer argument
*/

void errorExit(const char *message, int exitCode)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(exitCode);
}
/**
* main - function that copies the content of a file to another file
* @argc: argument
* @argv: argument vector
* Return: Success
*/

int main(int argc, char *argv[])
{
const char *fileFrom, *fileTo;
int fdFrom, fdTo;
char buffer[BUFFER_SIZE];
ssize_t bytesRead, bytesWritten;

if (argc != 3)
errorExit("Usage: cp file_from file_to", 97);
fileFrom = argv[1];
fileTo = argv[2];
fdFrom = open(fileFrom, O_RDONLY);
if (fdFrom == -1)
errorExit("Error: Can't read from file", 98);
fdTo = open(fileTo, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP
| S_IWGRP | S_IROTH);
if (fdTo == -1)
{
close(fdFrom);
errorExit("Error: Can't write to file", 99); }
while ((bytesRead = read(fdFrom, buffer, sizeof(buffer))) > 0)
{
bytesWritten = write(fdTo, buffer, bytesRead);
if (bytesWritten == -1)
{
close(fdFrom);
close(fdTo);
errorExit("Error: Can't write to file", 99); }}
if (bytesRead == -1)
{
close(fdFrom);
close(fdTo);
errorExit("Error: Can't read from file", 98);
}
if (close(fdFrom) == -1)
errorExit("Error: Can't close fd", 100);
if (close(fdTo) == -1)
errorExit("Error: Can't close fd", 100);
return (0);
}
