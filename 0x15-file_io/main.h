#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <elf.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
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
#endif
