#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int line;
	int letter;

	for (line = 0; line < 10; line++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}