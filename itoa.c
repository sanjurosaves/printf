#include "holberton.h"

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
