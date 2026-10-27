#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point, prints the last digit of a random number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* Votre code à compléter commence ici */

last_digit = n % 10;

printf("Last digit of %d is %d, n, last_digit");

if (Last_digit > 5)
{
printf(" and is greater than 5\n")
}
else if (Last_digit ==0)
{
printf(" and is 0\n");
}
else
{
printf(" and is less than 6 and not 0\n");
}

return (0);
}
