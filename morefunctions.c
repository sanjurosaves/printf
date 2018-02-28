#include "holberton.h"

/**
 * printchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: Count of all printchars in this program.
 */
int printchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strlen - calculates no of chars in a string
 * @str: pointer to the string
 * Return: length of the string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

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
