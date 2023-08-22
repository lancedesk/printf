#ifndef MAIN_H
#define MAIN_H

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>

void print_number(int n, int *res);
int _putchar(char c);
void _puts(char *str);
int _printf(const char *format, ...);
int (*format_getter(char s))(va_list);
char *int_to_string(int n, char *buffer);
char *double_to_string(double n, char *buffer);
char *int_to_string_u(unsigned int n, char *buffer);
char *int_to_hex_string(unsigned int n, char *buffer);
char *int_to_hex_string_ptr(void *ptr, char *buffer);
char *int_to_octal_string(unsigned int n, char *buffer);
char *int_to_binary(unsigned int n, char *buffer);

#endif
