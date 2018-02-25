#include "holberton.h"
#include <unistd.h>
#include <stdio.h>

int _printchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_str - prints an argument, if its a str
 *
 * @valist: variadic function
 */
void print_str(va_list valist)
{
	char *str;

	str = va_arg(valist, char *);
	printf("%s", str);
}

/**
 * print_char - prints an argument, if its a char
 *
 * @valist: variadic function
 */
void print_char(va_list valist)
{
	printf("%c", (char)va_arg(valist, int));
}

int _printf(const char *format, ...)
{
	data_type prt[] = {
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};
	va_list valist;
	int i = 0;
	int j = 0;

	va_start(valist, format);
	while (format != NULL && format[j] != '\0')
	{
		while (prt[i].fmt_spec != NULL)
		{
			if ( format[i] == *prt[i].fmt_spec)
			{
				prt[i].f(valist);
			}
			i++;
		}
		i = 0;
		j++;
	}
	printf("\n");
	va_end(valist);
	return (0);
}
