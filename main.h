#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <limits.h>

int _printf(const char *format, ...);
int (*selector(char str))(va_list arg);
int _putchar(char c);
int print_num(long num, int count);
int char_handler(va_list arg);
int dec_handler(va_list arg);
int str_handler(va_list arg);
int int_handler(va_list arg);
int bin_handler(va_list arg);
int print_bin(unsigned int num);
int uns_handler(va_list arg);
int oct_handler(va_list arg);
int hex_handler(va_list arg);
int hexa_handler(va_list arg);
int print_unsig(unsigned int num, int base, int uppercase);

#endif /* MAIN_H */
