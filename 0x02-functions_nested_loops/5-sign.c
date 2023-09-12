#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: int to be checked
 * Return: 1 and prints + if n is greater than zero
 * else returns 0 and prints 0 if n is zero
 * else if -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
