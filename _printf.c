#include "holberton.h"
#include <unistd.h>

/**
 * print_str - prints an argument, if its a str
 * @args: variadic function
 * Return: length of the string
 */
int  print_str(va_list args)
{
	char *str;
	int len;

	str = va_arg(args, char *);
	len = _strlen(str);

	write(1, str, len);
	return (len);
}

/**
 * print_char - prints an argument, if its a char
 * @args: variadic function
 * Return: length of the char, which will always be 1
 */
int print_char(va_list args)
{
	char c;

	c = (va_arg(args, int));
	return (write(1, &c, 1));
}

/**
 * print_dec - prints an argument, if its a char
 * @args: variadic function
 * Return: length of the string;
 */
int print_dec(va_list args)
{
	char *intstr;
	int i, len, j;

	i = ((va_arg(args, int)));
	intstr = malloc(sizeof(char) * 11);
	if (intstr == NULL)
		return (-1);
	intstr = itoa(i, intstr, 10);

	len = _strlen(intstr);

	for (j = 0; intstr[j] != '\0'; j++)
		printchar(intstr[j]);

	free(intstr);
	return (len);
}

/**
 * _printf - replicate standard lib func of same name
 * @format: pointer to variadic string construct
 * Return: length of string
 */
int _printf(const char *format, ...)
{
	data_type specifier[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_dec},
		{"i", print_dec},
		{NULL, NULL}
	};
	va_list args; int spec_i = 0, place = 0, len = 0, len2 = 0;

	va_start(args, format);
	for ( ; format[place] != '\0'; place++)
	{
		if ((format[place] != 37) && (format[place] != 92))
		{
			printchar(format[place]);
			len++;
		}
		else if (format[place] == 92)
			handlebackslash(format, place, len);
		else if (format[place] == 37)
		{
			if (format[place + 1] == 37)
			{
				printchar(37);
				len++;
			}
			else
			{
				for (spec_i = 0; specifier[spec_i].fmt_spec != NULL; spec_i++)
					if (format[place + 1] == *specifier[spec_i].fmt_spec)
					{
						len2 = specifier[spec_i].f(args);
						len += len2;
					}
				place++;
			}
		}
	}
	va_end(args);
	return (len);
}
