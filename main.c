#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
/*	unsigned int ui;
	void *addr;
*/
	len = _printf("Character:[%c]\n", 'H');
	len2 = printf("Character:[%c]\n", 'H');
	printf("Length:[%d, %i]\n", len, len);
	_printf("Length:[%d, %i]\n", len, len);
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
/*	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
*/	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	len = _printf("Negative:[%d]\n", -762534);
	len2 = printf("Negative:[%d]\n", -762534);
	printf("Length:[%d, %i]\n", len, len);
	_printf("Length:[%d, %i]\n", len, len);
/*	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	len = _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");
	printf("Length:[%d, %i]\n", len, len);
	_printf("Length:[%d, %i]\n", len, len);
	len = _printf("Positive Integer: [%d]\n", 34);
	len2 = printf("Positive Integer: [%d]\n", 34);
	printf("Length:[%d, %i]\n", len, len);
	_printf("Length:[%d, %i]\n", len, len);
*/	return (0);
}
