#include "main.h"

/**
 * print_alphabet — prints lowercase alphabet followed by newline
 *
 * Return: void
 */
void print_alphabet(void)
{
char lettre;

for (lettre = 'a'; lettre <= 'z'; lettre++)
{
_putchar(lettre);
}
_putchar('\n');
}
