#include "holberton.h"
#include <unistd.h>

int _strlen(char *str)
{
	int i;

	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * print_str - prints an argument, if its a str
 *
 * @args: variadic function
 */
int  print_str(va_list args)
{
	int i;
	char *str;

	str = va_arg(args, char *);

	write(1, &str, _strlen(str));
	return (_strlen(str));

}

/**
 * print_char - prints an argument, if its a char
 *
 * @args: variadic function
 */
int print_char(va_list args)
{
	char c;
	c = (va_arg(args, int));
	return (write(1, &c, 1));
}

/**
 * print_char - prints an argument, if its a char
 *
 * @args: variadic function
 */
int print_dec(va_list args)
{
        int i;

	i = ((va_arg(args, int)));
	return (write(1, &i, 1));
}

int _printf(const char *format, ...)
{
	data_type specifier[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_dec},
		{"i", print_dec},
		{NULL, NULL}
	};
	va_list args;
	int spec_i = 0, place = 0, len = 0;

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
				place++;
			}
			place++;
		}
	}
	va_end(args);

	printchar('\n');

	return (len);
}
