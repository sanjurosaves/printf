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
	void (*f)(va_list fmt_spec);
} data_type;

int printchar(char c);
int _printf(const char *format, ...);

#endif
