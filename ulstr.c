/* Escribe UN PROGRAMA que tome un string e invierta todas las letras (mayus/minus), y deje el resto
sin cambios.
Debe mostar el resultado seguido de un '/n'.
Si el número de argumentos no es 1, el programa muestra '/n'.*/

#include <unistd.h>

int main (int argc, char **argv)
{
    int i; // Variable para recorrer el string

    i = 0;
    if (argc == 2) // Si el número de argumentos es 1
    {
        while (argv[1][i]) // Mientras haya caracteres en el string
        {
            if ((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z')) // Si el caracter es una letra
            {
                if (argv[1][i] >= 'a' && argv[1][i] <= 'z') // Si el caracter es una letra minúscula
                    argv[1][i] = argv[1][i] - 32; // Se convierte a mayúscula
                else // Si el caracter es una letra mayúscula
                    argv[1][i] = argv[1][i] + 32; // Se convierte a minúscula
            }
            write(1, &argv[1][i], 1); // Se imprime el caracter
            i++; // Se avanza al siguiente caracter
        }
    }
    write(1, "\n", 1); // Se imprime una nueva línea
}