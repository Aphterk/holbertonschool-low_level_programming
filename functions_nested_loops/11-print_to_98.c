#include "main.h"

/**
 * print_to_98 - prints all integers from n to 98
 * @n: starting number
 *
 * Description: Numbers separated by ", ", ends with new line
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (i < 0)
			{
				_putchar('-');
				if (i <= -10)
					_putchar((-i / 10) + '0');
				_putchar((-i % 10) + '0');
			}
			else if (i < 10)
				_putchar(i + '0');
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (i < 0)
			{
				_putchar('-');
				if (i <= -10)
					_putchar((-i / 10) + '0');
				_putchar((-i % 10) + '0');
			}
			else if (i < 10)
				_putchar(i + '0');
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
		}
	}
	_putchar('\n');
}