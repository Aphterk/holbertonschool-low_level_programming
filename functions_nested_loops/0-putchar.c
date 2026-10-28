#include "main.h"
#include <unistd.h>

/**
 * _putchar — Écrit le caractère c sur la sortie standard
 * @c: Caractère à afficher
 *
 * Return: 1 si OK, -1 en cas d'erreur
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}