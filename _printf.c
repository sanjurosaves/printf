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
	printchar((unsigned char)va_arg(args, int));
}

int _printf(const char *format, ...)
{
	data_type specifier[] = {
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};
	va_list args;
	int spec_i = 0;
	int place = 0;

	va_start(args, format);

	for ( ; format[place] != '\0'; place++)
	{
		/* replicate char */
		if ((format[place] != 37) && (format[place] != 92))
			printchar(format[place]);
		/* check for escape backslash */
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
		/* check for start of format specification */
		else if (format[place] == 37)
		{
			if (format[place + 1] == 37)
				printchar(37);
			else
			{
				for (spec_i = 0; specifier[spec_i].fmt_spec != NULL; spec_i++)
					if (format[place + 1] == *specifier[spec_i].fmt_spec)
						specifier[spec_i].f(args);
			}
		}
	}

	va_end(args);

	printchar('\n');

	return (place);
}
