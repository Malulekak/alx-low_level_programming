#include "main.h"

/**
  * _abs - Computes the absolute value of an integer.
  * @c: The number to be computed.
  * Return: absolute number
  */
int _abs(int c)
{
	if (c < 0)
	{
		int a;

		a = c * -1;

		return (a);
	}

	return (c);
}
