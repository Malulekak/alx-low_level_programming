#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int h, i;

		for (h = 0; h < n; h++)
		{
			for (i = 0; i < n; i++)
			{
				if (i == h)
					_putchar('\\');
				else if (i < h)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
