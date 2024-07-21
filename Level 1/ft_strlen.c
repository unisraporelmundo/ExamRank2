/* Escribe una FUNCIÓN que devuelva la longitud de un string. */
#include <stdio.h>

int ft_strlen (char *str)
{
    int i;
    i = 0;

    while (str[i]) // Mientras el string exista //
        i++; // Incrementa la variable en 1 //
    return (i); // Devuelve la longitud del string //
}
