#include <stdarg.h>
#include "holberton.h"

/**
  * _printf - produces output according to a format.
  * @format: a character string.
  * Return: number of characters printed(
  * excludint the null terminator)
  */
int _printf(const char *format, ...)
{
	unsigned int i;
	char *ptr;
	char c;
	char *str;
	va_list args;

	va_start(args, format);
	ptr = format;
	i = 0;

	for (;ptr[i] != '\0'; i++)
	{
		while(ptr[i] != '%')
		{
			_putchar(ptr[i]);
			i++;
		}
		i++;
		switch(*++ptr)
		{
			case 'c':
				c = va_arg(args, int);
				_putchar(c);
				break;
			case 's':
				str = va_arg(args, char *);
				_print_str(str)
				break;
			case '%':
				_putchar('%');
				break;
		}
	}
	va_end(args);
	return (i);
}
