#include <stdio.h>
/**
 * main - affiche 0-9 puis a-f en minuscules
 *
 * Return: Always 0 (Success)
 */
int main(voi)
{
int n;

for (n = 0; n < 16; n++)
{
if (n < 10)
putchar(n + '0');
else
putchar(n - 10 + 'a');
}
putchar('\n');
return (0);
}
