/*Escribe una FUNCIÓN que muestre una cadena en la salida estándar.*/

#include "unistd.h" // Librería que contiene la función write //

void    ft_putstr(char *str) // Función que recibe un puntero a un array de caracteres //
{
    int i; // Variable entera //

    i = 0; // Inicializa la variable en 0 //
    while (str[i]) // Mientras el string exista //
    {
        write (1, &str[i], 1); // Escribe en la salida estándar el caracter en la posición actual que ocupa un byte //
        i++; // Incrementa la variable en 1 //
    }
}