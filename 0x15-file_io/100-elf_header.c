#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>

void elf_checking(unsigned char *e_ident);
void print_a(unsigned char *e_ident);
void print_o(unsigned char *e_ident);
void print_t(unsigned int e_type, unsigned char *e_ident);
void print_mag(unsigned char *e_ident);
void print_c(unsigned char *e_ident);
void print_d(unsigned char *e_ident);
void print_v(unsigned char *e_ident);
void print_a(unsigned char *e_ident);
void print_e(unsigned long int e_entry, unsigned char *e_ident);
void closing_elf(int elf);

/**
* main - prints out info in the ELF.
* @argc: argument count.
* @argv: argument vector*
* Return: integer (0)success
*/
int main(int argc, char *argv[])
{
int o, r;
Elf64_Ehdr *header;

if (argc != 2)
{
fprintf(stderr, "Usage: %s <ELF file>\n", argv[0]);
return (1);
}
o = open(argv[1], O_RDONLY);
if (o == -1)
{
fprintf(stderr, "Error: Can't read file %s\n", argv[1]);
return (1);
}

header = malloc(sizeof(Elf64_Ehdr));
if (header == NULL)
{
closing_elf(o);
fprintf(stderr, "Error: Can't allocate memory\n");
return (1);
}

r = read(o, header, sizeof(Elf64_Ehdr));
if (r == -1)
{
free(header);
closing_elf(o);
fprintf(stderr, "Error: Cannot read ELF header\n");
return (1);
}

elf_checking(header->e_ident);
printf("ELF Header:\n");
print_mag(header->e_ident);
print_c(header->e_ident);
print_d(header->e_ident);
print_v(header->e_ident);
print_o(header->e_ident);
print_a(header->e_ident);
print_t(header->e_type, header->e_ident);
print_e(header->e_entry, header->e_ident);

free(header);
closing_elf(o);
return (0);
}

/**
* elf_checking - Checking type of file.
* @e_ident: A points to an array.
*
* Description: Exit if not ELF
*/

void elf_checking(unsigned char *e_ident)
{
int i;

for (i = 0; i < 4; i++)
{
if (e_ident[i] != 127 &&
e_ident[i] != 'E' &&
e_ident[i] != 'L' &&
e_ident[i] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98); }}}

/**
* print_mag - Prints numbers of ELF header.
* @e_ident: Pointer to an array with ELF numbers
*/
void print_mag(unsigned char *e_ident)
{
int i;

printf(" Magic: ");

for (i = 0; i < EI_NIDENT; i++)
{
printf("%02x", e_ident[i]);

if (i == EI_NIDENT - 1)
printf("\n");
else
printf(" ");
}
}

/**
* print_c - Prints the class (ELF header).
* @e_ident: pointer to ELF class.
*/
void print_c(unsigned char *e_ident)
{
printf(" Class: ");

switch (e_ident[EI_CLASS])
{
case ELFCLASSNONE:
printf("none\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}

/**
* print_d - prints data (ELF header)
* @e_ident: points to an array
*/
void print_d(unsigned char *e_ident)
{
printf(" Data: ");

switch (e_ident[EI_DATA])
{
case ELFDATANONE:
printf("none\n");
break;
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}

/**
* print_v - prints version.
* @e_ident: poinsr to an array.
*/
void print_v(unsigned char *e_ident)
{
printf(" Version: %d",
e_ident[EI_VERSION]);

switch (e_ident[EI_VERSION])
{
case EV_CURRENT:
printf(" (current)\n");
break;
default:
printf("\n");
break;
}
}

/**
* print_o - prints OS/ABI
* @e_ident: points to an array with ELF version.
*/
void print_o(unsigned char *e_ident)
{
printf(" OS/ABI: ");

switch (e_ident[EI_OSABI])
{
case ELFOSABI_NONE:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
case ELFOSABI_IRIX:
printf("UNIX - IRIX\n");
break;
case ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("UNIX - TRU64\n");
break;
case ELFOSABI_ARM:
printf("ARM\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}
}

/**
* print_a - prints ABI version.
* @e_ident: points to an array with ABI version.
*/
void print_a(unsigned char *e_ident)
{
printf(" ABI Version: %d\n",
e_ident[EI_ABIVERSION]);
}

/**
* print_t - prints type.
* @e_type:  ELF type.
* @e_ident: points to an array.
*/
void print_t(unsigned int e_type, unsigned char *e_ident)
{
if (e_ident[EI_DATA] == ELFDATA2MSB)
e_type >>= 8;

printf(" Type: ");

switch (e_type)
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
printf("<unknown: %x>\n", e_type);
}
}

/**
* print_e - prints entry point.
* @e_entry: address of ELF entry.
* @e_ident: points to an array.
*/
void print_e(unsigned long int e_entry, unsigned char *e_ident)
{
printf(" Entry point address: ");

if (e_ident[EI_DATA] == ELFDATA2MSB)
{
e_entry = ((e_entry << 8) & 0xFF00FF00) |
((e_entry >> 8) & 0xFF00FF);
e_entry = (e_entry << 16) | (e_entry >> 16);
}

if (e_ident[EI_CLASS] == ELFCLASS32)
printf("%#x\n", (unsigned int)e_entry);

else
printf("%#lx\n", e_entry);
}

/**
* closing_elf - Close ELF.
* @elf: file descriptor
* exit code 98.
*/
void closing_elf(int elf)
{
if (close(elf) == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't close fd %d\n", elf);
exit(98);
}
}
