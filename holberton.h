#ifndef HOLBERTON_H_
#define HOLBERTON_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int printchar(char c);
int _strlen(char *str);
int _printf(const char *format, ...);
char *itoa(int value, char *result, int base);
int handlebackslash(const char *format, int place, int len);

#endif
