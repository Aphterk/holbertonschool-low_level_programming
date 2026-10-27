#include <stdio.h>

/**
 * main - boucle commence à z fini à a
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;

for (c = 'z'; c >= 'a'; c--)
putchar(c);
putchar('\n');
return (0);
}
