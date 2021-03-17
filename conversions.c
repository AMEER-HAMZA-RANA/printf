#include "holberton.h"

/**
  * to_Binary - convert unsigned int to binary.
  * @n: number passed for convertion.
  * Return: binary number.
  */
int to_Binary(unsigned int n)
{
	int binary[sizeof(unsigned int) * 8], modula, j,
	    chars_counter = 0;
	if (n == 0)
	{
		chars_counter += _putchar('0');
		return (chars_counter);
	}
	if (n == 1)
	{
		chars_counter += _putchar('1');
		return (chars_counter);
	}
	modula = 0;
	while (n > 0)
	{
		binary[modula] = '0' + (n % 2);
		n /= 2;
		modula++;
	}
	for (j = modula - 1; j >= 0; j--)
		chars_counter += _putchar(binary[j]);
	return (chars_counter);
}
