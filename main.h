#include <stdarg.h>
#include <stddef.h>
#ifndef MAIN_H
#define MAIN_H

typedef struct functions
{
	char letter;
	int (*f)(va_list args);
}func_v;

int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int _printf(const char *format, ...);

#endif
