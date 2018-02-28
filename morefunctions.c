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
 * itoa - this function came from
 * https://stackoverflow.com/questions/8257714/
 * how-to-convert-an-int-to-string-in-c
 * @base: base of integer
 * @result: converted string
 * @value: integer to convert
 *
 * Return: converted string
 */
char *itoa(int value, char *result, int base)
{
	char *ptr = result, *ptr1 = result, tmp_char;
	int tmp_value;

	if (base < 2 || base > 36)
	{
		*result = '\0'; return result;
	}

	do {
		tmp_value = value;
		value /= base;
		*ptr++ =
"zyxwvutsrqponmlkjihgfedcba9876543210123456789abcdefghijklmnopqrstuvwxyz"
[35 + (tmp_value - value * base)];
	} while  (value);

	if (tmp_value < 0)
		*ptr++ = '-';
	*ptr-- = '\0';
	while (ptr1 < ptr)
	{
		tmp_char = *ptr;
		*ptr-- = *ptr1;
		*ptr1++ = tmp_char;
	}
	return (result);
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
