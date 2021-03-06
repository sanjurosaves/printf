#ifndef HOLBERTON_H_
#define HOLBERTON_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * struct type - incoming data type/format
 * @fmt_spec: pointer to format specifier string
 * @f: associated function name
 */
typedef struct type
{
	char *fmt_spec;
	int (*f)(va_list fmt_spec);
} data_type;

char *ft_itoa_base(int value, char *text, int base);
long max_power(long nb, int base);
int printchar(char c);
int _strlen(char *str);
int print_str(va_list args);
int print_char(va_list args);
int print_dec(va_list args);
int _printf(const char *format, ...);
int handlebackslash(const char *format, int place, int len);

#endif
