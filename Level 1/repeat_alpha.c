/* Escrine un programa que tome un string y lo muestre repitiendo cada carácter alfabético tantas veces
como su índice alfabético, seguido de una nueva línea. Si el número de argumentos no es 1 simplemente
muestra una nueva línea*/

#include "unistd.h" // Librería que contiene las funciones write y read //

int main (int argc, char **argv) // Recibe dos parametros, el número de argumentos, y un array de argumentos //
{
    int i; // Variable para recorrer los caracteres del string //
    int j; // Variable para determinar cuantas veces debe de repetirse un caracter//

    if (argc == 2) // Verifica el número de argumentos. "Si el número de argumentos es igual a 2"
    {
        i = 0; // Inicializa la variable en 0 //
        while (argv[1][i]) // Mientras el string exista //
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z') // Si el caracter actual es una letra en minúscula//
               j = argv[1][i] - 'a' + 1; // Asigna a la variable j el índice alfabético del caracter actual //
            else if ((argv[1][i] >= 'A' && argv[1][i] <= 'Z')) // Si el caracter actual es una letra en mayúscula //
                j = argv[1][i] - 'A' + 1; // Asigna a la variable j el índice alfabético del caracter actual //
            else // Si el caracter actual no es una letra //
                j = 1; // Asigna a la variable j el valor de 1 //
            while (j--) 
                write (1, &argv[1][i], 1); // Escribe en la salida estándar el caracter en la posición actual que ocupa un byte //
            i++; // Incrementa la variable en 1 //
        }
    }
    write (1, "\n", 1); // Escribe un salto de línea en la salida estándar //
    return (0); // Retorna 0 //
}