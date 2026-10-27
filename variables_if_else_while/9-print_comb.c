#include <stdio.h>
/**
 * main - compinaison des chiffres de 0 à 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n,

for (n = 0; n <= 9; n++)
{
putchar(n + '0');
if (n != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
