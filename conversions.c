#include "holberton.h"

/**
  * to_Binary - convert unsigned int to binary.
  * @n: number passed for convertion.
  * Return: binary number.
  */
long to_Binary(int n)
{
	long binary = 0;
	int modula, tmp = 1;

	while (n != 0)
	{
		modula = n % 2;
		n /= 2;
		binary = binary + modula * tmp;
		tmp *= 10;
	}
	return (binary);
}
