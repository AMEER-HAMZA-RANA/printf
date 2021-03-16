#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"

/**
  * _printf - produces output according to a format.
  * @format: a character string.
  * Return: number of characters printed(
  * excluding the null terminator)
  */
int _printf(const char *format, ...)
{
	unsigned int i = 0;
	const char *ptr;
	/* char c; */
	char *str;
	va_list args;

	va_start(args, format);
	ptr = format;

	for (; *ptr != '\0'; ptr++, i++)
	{
		if (*ptr != '%')
		{
			_putchar(*ptr);
			continue;
		}
		switch (*++ptr)
		{
			case 'c':
				/* c = va_arg(args, int); */
				_putchar(va_arg(args, int));
				break;
			case 's':
				str = va_arg(args, char *);
				_print_str(str);
				break;
			case '%':
				_putchar('%');
				break;
		}
	}
	va_end(args);
	return (i);
}
