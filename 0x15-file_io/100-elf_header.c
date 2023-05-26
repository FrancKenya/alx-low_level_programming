#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_entry(uint64_t e_entry);
void close_elf(int fd);

/**
* check_elf - Checks if the given file is an ELF file.
* @e_ident: points to ELF magic numbers array.
*/
void check_elf(unsigned char *e_ident)
{
if (!(e_ident[0] == 0x7f && e_ident[1] == 'E' && e_ident[2] == 'L'
&& e_ident[3] == 'F'))
{
fprintf(stderr, "Error: Not an ELF file\n");
exit(98);
}
}

/**
* print_magic - prints the magic numbers of ELF header..
* @e_ident: points to an array.
*/
void print_magic(unsigned char *e_ident)
{
int i;

printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
{
printf("%02x ", e_ident[i]);
}
printf("\n");
}
/**
*  print_class - prints class of ELF header..
* @e_ident: points to array of ELF class.
*/
void print_class(unsigned char *e_ident)
{
printf("  Class:                             ");
switch (e_ident[4])
{
case 0:
printf("none\n");
break;
case 1:
printf("ELF32\n");
break;
case 2:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", e_ident[4]);
}
}

/**
* print_data - prints data of ELF header..
* @e_ident: points to an array of ELF class.
*/
void print_data(unsigned char *e_ident)
{
printf("  Data:                              ");
switch (e_ident[5])
{
case 0:
printf("none\n");
break;
case 1:
printf("2's complement, little endian\n");
break;
case 2:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", e_ident[5]);
}
}

/**
* print_version - Prints the version.
* @e_ident: points to array of ELF version
*/
void print_version(unsigned char *e_ident)
{
printf("  Version:                           %d", e_ident[6]);
switch (e_ident[6])
{
case 1:
printf(" (current)\n");
break;
default:
printf("\n");
break;
}
}

/**
* print_entry - prints entry point address.
* @e_entry: entry point address.
*/
void print_entry(uint64_t e_entry)
{
printf("  Entry point address:               %#lx\n", e_entry);
}

/**
* close_elf - Closes the fd file.
* @fd: The file descriptor of the ELF file.
*/
void close_elf(int fd)
{
if (close(fd) == -1)
{
fprintf(stderr, "Error: Can't close file descriptor %d\n", fd);
exit(98);
}
}

/**
* main - Entry point of file
* @argc: argument count
* @argv: argument vector
* Return: int
*/
int main(int argc, char *argv[])
{
int fd;
struct stat st;
ssize_t bytes_read;
ElfHeader *header;

if (argc < 2)
{
fprintf(stderr, "Usage: %s <elf_file>\n", argv[0]);
return (1);
}

fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
fprintf(stderr, "Error: Can't read file %s\n", argv[1]);
return (1);
}

if (fstat(fd, &st) == -1)
{
fprintf(stderr, "Error: Failed to get file information\n");
close_elf(fd);
return (1);
}

if ((size_t)st.st_size < sizeof(ElfHeader))
{
fprintf(stderr, "Error: Invalid ELF file\n");
close_elf(fd);
return (1);
}

header = (ElfHeader *)malloc(sizeof(ElfHeader));
if (header == NULL)
{
fprintf(stderr, "Error: Failed to allocate memory\n");
close_elf(fd);
return (1);
}
bytes_read = read(fd, header, sizeof(ElfHeader));
if (bytes_read == -1)
{
fprintf(stderr, "Error: Failed to read file\n");
free(header);
close_elf(fd);
return (1);
}

check_elf(header->e_ident);

printf("ELF Header:\n");
print_magic(header->e_ident);
print_class(header->e_ident);
print_data(header->e_ident);
print_version(header->e_ident);
print_entry(header->e_entry);

free(header);
close_elf(fd);

return (0);
}
