#include <unistd.h>
#include <stdio.h>

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
