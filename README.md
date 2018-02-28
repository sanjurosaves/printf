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
| morefunctions.c | Containing helper function |


### Function Descriptions

| **Function** | **Description** |
| -------------- | ----------------- |


|int print_char(va_list args)|prints a character|
|int print_str(va_list args)|Prints a string|
|int print_dec(va_list args)|Prints a number|
|int printchar(char c)| Writes a character to stdout|
|int _strlen(char *str)|calculates the lenght of the string|
|char *itoa(int value, char *result, int base)|convert integer to alpha convention|
|int handlebackslash(const char *format, int place, int len)| checking the next position after backslash |
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

Alex Allen, Elena Serebryakova
