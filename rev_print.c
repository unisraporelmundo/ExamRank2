/* Escribe UN PROGRAMA que tome un string y lo muestre al revés, seguido de una nueva línea.
Si el número de parámetros no es 1, el programa muestra una nueva línea.*/

#include "unistd.h" // Librería que contiene la función write //
int main (int argc, char **argv) 
{
    int i; // Variable para recorrer los caracteres del string //

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i]) // Mientras el string exista //
            i++; // Incrementa la variable en 1 //
        while (i) // Mientras i exista //
            write (1, &argv[1][--i], 1); // Escribe en la salida estándar el caracter en la posición actual que ocupa un byte //
    }
    write (1, "\n", 1); // Escribe un salto de línea en la salida estándar //
    return (0); // Retorna 0 //
}