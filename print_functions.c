#include "holberton.h"


/**
 * _print_str - prints a string
 * @string: string to be printed
 */

void _print_str(char *string)
{
	if (string != NULL)
		while (*string)
			_putchar(*string++);
	else
		_print_str("(null)");

}

/**
 * _print_int - prints an integer
 * @var: variable to be printed
 */

void _print_int(int var)
{
	if (var < 0)
	{
		_putchar('-');
		var = -var;
	}

	if (var / 10)
		_print_int(var / 10);

	_putchar(var % 10 + '0');
}
