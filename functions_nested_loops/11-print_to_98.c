#include "main.h"

/**
 * print_number - helper to print any positive or negative integer
 * @n: number to print
 *
 * Return: void
 */
static void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}

/**
 * print_to_98 - prints all integers from n to 98
 * @n: starting integer
 *
 * Description: Numbers separated by ", ", ends with newline
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
			print_number(i);
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
			print_number(i);
		}
	}
	_putchar('\n');
}
