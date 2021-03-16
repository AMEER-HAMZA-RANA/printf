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
	char arg_c;
	int arg_i;
	char *arg_str;
	va_list args;

	va_start(args, format);

	for (count = 0; *(format + count) != '\0'; count++)
	{
		if (format[count] == '%')
		{
			++count;

			switch(format[count])
			{
				case 'c':
					arg_c = va_arg(args, int);
					_putchar(arg_c);
					break;

				case 's':
					arg_str = va_arg(args, char *);
					_print_str(arg_str);
					break;

				case '%':
					_putchar('%');
					break;

				case 'd':
					arg_i = va_arg(args, int);
					_print_int(arg_i);
					break;

				case 'i':
					arg_i = va_arg(args, int);
					_print_int(arg_i);
					break;

				default:
					_putchar('%');
					_putchar(format[count]);
			}
		}

		else
		{
			_putchar(format[count]);	
		}
	}

	va_end(args);
	return (count);
}
