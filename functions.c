#ifndef MAIN_H
#define MAIN_H
#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int print_char(va_list args) 
{
	char ch;
	ch = va_arg(args, int);
	_putchar(ch);

	return (1);
}

int  print_string(va_list args)
{
	int i;
	char *str;
	str = va_arg(args, char*);
	
	if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

int print_int(va_list args)
{
	long int n, i, count = 0;
	n = (long int)(va_arg(args, int));
	
	if (n == 0)
	{
		_putchar('0');
		return(1);
	}
	if (n < 0)
	{
		n = n * -1;
		count++;
		_putchar('-');
	}
	for(i = 1; i <= n; i = i * 10)
	{
		count++;
	}
	i = i / 10;
	for(; i > 0; i /= 10)
	{
		_putchar(((n / i) % 10) + '0');
	}
	return((int)count);
}
#endif
