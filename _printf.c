#include "holberton.h"
#include <unistd.h>

/**
 * print_str - prints an argument, if its a str
 *
 * @args: variadic function
 */
void print_str(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	printf("%s", str);
}

/**
 * print_char - prints an argument, if its a char
 *
 * @args: variadic function
 */
void print_char(va_list args)
{
	printf("%c", (char)va_arg(args, int));
}

int _printf(const char *format, ...)
{
/*	data_type specifier[] = {
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};
*/	va_list args;
/*	int i = 0;
 */	int place = 0;

	va_start(args, format);

	for ( ; format[place] != '\0'; place++)
	{
		if ((format[place] != 37) && (format[place] != 92))
			printchar(format[place]);
		else if (format[place] == 92)
		{
			if (format[place + 1] == 92)
				printchar(92);
			else if (format[place + 1] == 34)
				printchar(34);
			else if (format[place + 1] == 39)
				printchar(39);
			else if (format[place + 1] == 37)
				printchar(37);
		}
		else if (format[place] == 37)
		{
			if (format[place + 1] == 37)
				printchar(37);
			else if (format[place + 1] == 'c')
				print_char(args);
			else if (format[place + 1] == 's')
				 print_str(args);
			else if (format[place + 1] == 'd'
				 || format[place + 1] == 'i')
				/* print integer */{;}
		}
	}
/*
	while (format != NULL && format[place] != '\0')
	{
		while (specifier[i].fmt_spec != NULL)
		{

			if (format[i] == *specifier[i].fmt_spec)
			{
				specifier[i].f(args);
			}
			i++;
		}
		i = 0;
		place++;
	}
*/
	va_end(args);

	printchar('\n');

	return (place);
}
