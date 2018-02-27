#include "holberton.h"
/**
 * handlebackslash - checking the next position after backslash
 * @format: pointer to the string
 * @place: position
 * @len: calculating the lenght
 * Return: length of the string
 */
int handlebackslash(const char *format, int place, int len)
{
	if (format[place + 1] == 92)
	{
		printchar(92);
		len++;
	}
	else if (format[place + 1] == 34)
	{
		printchar(34);
		len++;
	}
	else if (format[place + 1] == 39)
	{
		printchar(39);
		len++;
	}
	else if (format[place + 1] == 37)
	{
		printchar(37);
		len++;
	}

	return (len);
}
