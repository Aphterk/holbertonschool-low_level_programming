#include <stdio.h>

/**
*main - afficher les chiffres de 0 à 9 sur une seule ligne
*
*Return: Always 0 (Success)
*/
int main(void)
{
int n;

for (n = 0; n <= 9; n++)
putchar(n + '0');
putchar('\n');
return (0);
}
