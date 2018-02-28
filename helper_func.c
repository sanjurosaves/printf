#include "holberton.h"

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
