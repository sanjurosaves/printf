#include "holberton.h"
#include <unistd.h>

/**
 * _printf - replicate standard lib func of same name
 * @format: pointer to variadic string construct
 * Return: length of string
 */
int _printf(const char *format, ...)
{
	data_type specifier[] = {{"c", print_char}, {"s", print_str},
				 {"d", print_dec}, {"i", print_dec}, {NULL, NULL} };
	va_list args; int spec_i = 0, place = 0, len = 0, len2 = 0, smark = 1;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (; format[place] != '\0'; place++)
	{
		if ((format[place] != 37) && (format[place] != 92))
		{
			printchar(format[place]); len++;
		}
		else if (format[place] == 92)
			handlebackslash(format, place, len);
		else if (format[place] == 37)
		{
			if (format[place + smark] == '\0')
			{
				va_end(args);
				return (-1);
			}
			if (format[place + smark] == 37)
			{
				printchar(37); len++; place++;
			}
			else if (format[place + smark] != 'c' && format[place + smark] != 's'
			    && format[place + smark] != 'd' && format[place + smark] != 'i')
			{
				printchar(format[place]); len++;
			}
			else
			{
				for (spec_i = 0; specifier[spec_i].fmt_spec != NULL; spec_i++)
					if (format[place + smark] == *specifier[spec_i].fmt_spec)
					{
						if (len2 == 0)
						{
							va_end(args);
							return (-1);
						}
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
