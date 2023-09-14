#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 *
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int h, i;

		for (h = 0; h < size; h++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
