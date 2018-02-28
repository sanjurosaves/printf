## Printf
### Description
_printf is the implementation of the printf function that prints strings, characters and numbers.

### Environment
_printf function was developed and tested on `Ubuntu 14.04 LTS` via Vagrant in VirtualBox.

### File Contents
The repository contains the following files:

|   **File**   |   **Description**   |
| -------------- | --------------------- |
| \_printf.c | The printf function |
| holberton.h   | Header file containing all function prototypes and struct declaration |
| helper_func.c | Containing helper functions to print character, string and numbers |
| printchar.c | a putchar replica, prints a character |
| _strlen.c | a strlen replica, returns the lenght of the string |
| itoa.c  | integer to alpha convention |

### Function Descriptions

| **Function** | **Description** |
| -------------- | ----------------- |
|int (*get_format(char chr))(va_list)| Function that checks if the character format modifier being passed is valid or not|
|int _putchar(char c)| Writes a character to stdout|
|int print_char(va_list list)|prints a character|
|int print_string(va_list list)|Prints a string|
|int print_string(va_list list)|Prints a string|
|int _pow(int x, int y)|calculates the power of a number recursively|
|int print_num(va_list list)|prints a number|
|int _printf(const char *format, ...)|prints strings, characters and numbers to stdout|

### Usage and Installation
Clone the repository, compile with comliation flags, listed below, then run the executable.
```
$ git clone https://github.com/sanjurosaves/printf.git
```
### Compilation
This code was compiled this way:
` $ gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c -o printf `

###### Example code

```
int main(void)
{
	_printf("Hello %s\n", "World");
	return (0);
}
=========================================
$ ./printf
Hello World
$
```

### Authors

Alex Allen
Elena Serebryakova
