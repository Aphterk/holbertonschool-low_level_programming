#include <stdio.h>

/**
* main - Entry point, prints lowercase alphabet
*
* Return: Always 0 (Success)
*/
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');

return (0);
}