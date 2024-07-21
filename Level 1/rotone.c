/* Escribe UN PROGRAMA que tome un string y lo muestre reemplazando una de sus letras por la siguiente
en orden alfabético. ('z' se convierte en la 'a').
La salida irá seguida de un salto de línea (/n).
Si el número de argumentos no es 1, el programa muestra (/n)*/
#include <unistd.h>

int main (int argc, char **argv)
{
    int i; // Variable para recorrer el string

    i = 0;
    if (argc == 2) // Si el número de argumentos es 1
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'a' && argv[1][i] < 'z') // Si el caracter es una letra minúscula
                argv[1][i] = argv[1][i] + 1; // Se reemplaza por la letra siguiente
            else if (argv[1][i] == 'z') // Si el caracter es una 'z'
                argv[1][i] = 'a'; // Se reemplaza por una 'a'
            else if (argv[1][i] >= 'A' && argv[1][i] < 'Z') // Si el caracter es una letra mayúscula
                argv[1][i] = argv[1][i] + 1; // Se reemplaza por la letra siguiente
            else if (argv[1][i] == 'Z') // Si el caracter es una 'Z'
                argv[1][i] = 'A'; // Se reemplaza por una 'A'
            write(1, &argv[1][i], 1); // Se imprime el caracter
            i++; // Se avanza al siguiente caracter
        }
    }
    write(1, "\n", 1); // Se imprime una nueva línea
    return (0);
}