#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <elf.h>
#include <stdio.h>

/**
* struct ElfHeader - stands for ELF
* @e_ident: ELF identity
* @e_type: file type
* @e_machine: Target
* @e_version: Version of file
* @e_entry: Entry point
* @e_phoff: Program header
* @e_shoff: Section header
* @e_flags: Processor
* @e_ehsize: ELF header
* @e_phentsize: Size
* @e_phnum: Number
* @e_shentsize: Size of section entry
* @e_shnum: Number of section entries header
* @e_shstrndx: index of section.
*/

typedef struct ElfHeader
{
	unsigned char e_ident[EI_NIDENT];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint64_t e_entry;
	uint64_t e_phoff;
	uint64_t e_shoff;
	uint32_t e_flags;
	uint16_t e_ehsize;
	uint16_t e_phentsize;
	uint16_t e_phnum;
	uint16_t e_shentsize;
	uint16_t e_shnum;
	uint16_t e_shstrndx;
} ElfHeader;

#endif
