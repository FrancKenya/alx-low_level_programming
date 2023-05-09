#include "main.h"
#include <fcntl.h>
/**
* print_error - prints standard error
* @msg: message error printed
*/
void print_error(char *msg)
{
	fprintf(stderr, "Error: %s\n", msg);
	exit(98);
}
/**
* print_elf_header - prints out elf header
* @hdr: header
*/
void print_elf_header(Elf64_Ehdr *hdr)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", hdr->e_ident[i]);
	}
	printf("\n");
	printf("Class:%s\n", hdr->e_ident[EI_CLASS] == ELFCLASS32 ?
	"ELF32" : "ELF64");
	printf("Data:%s\n", hdr->e_ident[EI_DATA] == ELFDATA2LSB ?
	 "2's complement, little endian" : "2's complement, big endian");
	printf("Version:%d\n", hdr->e_ident[EI_VERSION]);
	printf("OS/ABI:%s\n", hdr->e_ident[EI_OSABI] == ELFOSABI_SYSV ?
	"UNIX - System V" : "UNIX - GNU");
	printf("ABI Version:%d\n", hdr->e_ident[EI_ABIVERSION]);
	printf("Type:");
	switch (hdr->e_type)
	{
		case ET_NONE:
		printf("NONE (None)\n");
		break;
		case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
		case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
		case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
		case ET_CORE:
		printf("CORE (Core file)\n");
		break;
		default:
		printf("<unknown: %d>\n", hdr->e_type);
		break;
	}
	printf("Entry point address:%lx\n", hdr->e_entry);
}
/**
* main - calls other functions
* @argc: argument count
* @argv: argument vector
* Return: 0 success
*/

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr hdr;

	if (argc != 2)
	{
		print_error("Invalid arguments. Usage: elf_header elf_filename");
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		print_error("Cannot open file");
	}
	if (read(fd, &hdr, sizeof(hdr)) != sizeof(hdr))
	{
		print_error("Cannot read ELF header");
	}
	if (hdr.e_ident[EI_MAG0] != ELFMAG0 || hdr.e_ident[EI_MAG1] != ELFMAG1 ||
	hdr.e_ident[EI_MAG2] != ELFMAG2 || hdr.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("File is not an ELF file");
	}
	print_elf_header(&hdr);
	if (close(fd) == -1)
	{
		print_error("Cannot close file");
	}
	return (0);
}
