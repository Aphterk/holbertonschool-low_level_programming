#include "main.h"

/**
* print_alphabet — imprime l'alphabet en minuscules suivi dune nouvelle ligne
*
* Retour : rien
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
