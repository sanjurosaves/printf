#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * max_power - determines max power
 * @base: base
 * @nb: number
 * Return: max
 */
long max_power(long nb, int base)
{
	long max;

	max = base;
	while (max < nb)
		max *= base;
	if (max > nb)
		max /= base;
	return (max);
}

/**
 * ft_itoa_base - converts integer to alpha string
 * @base: integer base
 * @text: empty string to write to
 * @value: integer value to convert
 * Return: text variable as alpha string
 */
char *ft_itoa_base(int value, char *text, int base)
{
	long nb;
	long max;
	char hex[16] = "0123456789ABCDEF";
	int i;
	int j;

	nb = (long)value;
	i = 0;
	j = 0;
	if (nb < 0 && base == 10)
	{
		text[i] = '-';
		i++;
		nb = -nb;
	}
	if (nb < 0 && base != 10)
	{
		nb = -nb;

	}
	max = max_power(nb, base);
	while (max > 0)
	{
		j = nb / max;
		text[i] = hex[j];
		nb %= max;
		max /= base;
		i++;
	}
	text[i] = '\0';
	return (text);
}
