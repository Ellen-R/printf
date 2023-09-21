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
void bin_handler(unsigned int num);

#endif /* MAIN_H */
