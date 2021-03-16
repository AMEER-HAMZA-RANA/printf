#include <stdarg.h>
#include "holberton.h"

/**
  * _printf - produces output according to a format.
  * @format: a character string.
  * Return: number of characters printed(
  * excluding the null terminator)
  */

int _printf(const char *format, ...)
{
	int count;
	va_list args;

	if (format == NULL)
		return (0);
	va_start(args, format);
	for (count = 0; *(format + count) != '\0'; count++)
	{
		if (format[count] == '%')
		{	
			if ((*format + count) != '\0')
				++count;
			switch (format[count])
			{
				case 'c':
					_putchar(va_arg(args, int));
					break;
				case 's':
					_print_str(va_arg(args, char *));
					break;
				case '%':
					_putchar('%');
					break;
				case 'd':
					_print_int(va_arg(args, int));
					break;
				case 'i':
					_print_int(va_arg(args, int));
					break;
				default:
					_putchar('%');
					_putchar(format[count]);
			}
		}
		else
			_putchar(format[count]);
	}
	va_end(args);
	return (count);
}
