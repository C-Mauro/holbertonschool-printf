#include "main.h"
#include <stdarg.h>
/**
 *
 *
 */

int (*specifier_match(char format))(va_list args)
{
	int i;
	func_v func[]  ={
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}
	};

	for (i = 0; func[i].letter != '\0'; i++)
	{
		if(func[i].letter == format)
		{
			return (func[i].f);
		}
	}
	return (0);
}


int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list args;

	if (format == NULL)
		return(-1);

	va_start(args, format);

	for(i = 0; format[i]; i++)
	{	
		if ((format[i] == '%') && (format[i+1] == '%'))
		{	
			_putchar(format[i]);
			count++;
			i = i + 1;
		}
		else if ((format[i] == '%') && (format[i+1] != '%'))
		{
			if ((*(specifier_match(format[i+1]))) != 0)
			{
				count += (*(specifier_match(format[i+1])))(args);
				i++;
			}
			else if ((format[i] == '%') && (format[i + 1] == 0))
			{
				_putchar('a');
			}
			else
			{
				_putchar(format[i]);
				_putchar(format[i + 1]);
				i++;
				count = count + 2;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}

	va_end(args);
	return(count);

}
