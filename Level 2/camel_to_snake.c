/* Escribe UN PROGRAMA que tome un string como argumento en formato lowerCamelCase y lo convierta en
un string en formato Snake_case.
lowerCamelCase -> Cadena sin espacios donde cada palabra, excepto la primera, comienza en mayúsculas.
Snake_case -> Cadena donde cada palabra está en minúscula separadas por un guión bajo.*/

#include <unistd.h>

int main (int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 2) // Si el número de argumentos es 2
    {
        while (argv[1][i]) // Mientras argv[1][i] no sea nulo
        {
            if (argv[1][i] >= 65 && argv[1][i] <= 90) // Si el caracter es Mayúscula
            {
                argv[1][i] = argv[1][i] + 32; // Se convierte el caracter a minúscula
                write(1, "_", 1); // Se imprime un guión bajo
            }
            write(1, &argv[1][i], 1); // Se imprime el caracter
            i++; // Se incrementa i
        }
    }   
    write(1, "\n", 1); // Se imprime una nueva línea
    return (0); // Se retorna 0
}