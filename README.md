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
Clone the repository, compile with  by cloning the repository to a directory, then run the executable.
```
$ git clone https://github.com/kevanlucc/printf.git
```
### Compilation

This code was compiled with the following flags:
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

###  Roadmap 

Adding more format modifiers:
* r
* R
* x
* X
* u
* o
* S
* p

### Authors

* [**Kevan Lucchini**](https://github.com/kevanlucc)
* [**Madison Burke**](https://github.com/RocketHTML)

<p align="center">
<a href="https://www.holbertonschool.com"><img src="https://intranet.hbtn.io/assets/holberton-logo-simplified-d4e8a1e8bf5ad93c8c3ce32895b4b53749b477b7ba7342d7f064e6883bcd3be2.png"></a>
</p>
File | Description
--- | ---
holberton.h | header file
printchar.c | a put char replica
_printf.c | primary file
itoa.c | integer to alpha conversion
README.md | readme
