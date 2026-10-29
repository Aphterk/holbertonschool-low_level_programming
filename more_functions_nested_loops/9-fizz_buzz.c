#include "main.h"

/**
* main -FizzBuzz: prints 1 to 100 with special rules
*
* fizzbuzz - prints numbers 1-100 with Fizz/Buzz/FizzBuzz rules
*
* Description: Multiples of 3 → Fizz, multiples of 5 → Buzz,
* multiples of both → FizzBuzz. Each separated by space. Ends with newline.
* Return: void
*/
void fizzbuzz(void)
{
    int i;

    for (i = 1; i <=100; i++)
    {
        if (i % 15 == 0)
        {
            _putchar('F');
            _putchar('i');
            _putchar('z');
            _putchar('z');
            _putchar('B');
            _putchar('u');
            _putchar('z');
            _putchar('z');
        }
        else if (i % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}

		if (i < 100)
			_putchar(' ');
	}
	_putchar('\n');
}
