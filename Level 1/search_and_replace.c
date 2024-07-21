/* Escribe UN PROGRAMA que tome 3 argumentos.
El primero, un string en el que se reemplace una letra (Segundo argumento), por otra letra (Tercer argumento)
Si el número de argumentos no es 3, muestra una nueva línea.
Si el segundo argumento (la letra a cambiar) no está contenido en el primero (El string), el programa
simplemente reescribe el string seguido de una nueva línea.*/

#include <unistd.h>

int main (int argc, char **argv)
{
    int i; // Variable para recorrer el string

    i = 0;
    if (argc == 4 && !argv[2][1] && !argv[3][1]) // Si el número de argumentos es 3 y los argumentos 2 y 3 son de un solo caracter
    {
        while (argv[1][i])
        {
            if (argv[1][i] == argv[2][0]) // Si el caracter es igual al segundo argumento
                argv[1][i] = argv[3][0]; // Se reemplaza por el tercer argumento
            write(1, &argv[1][i], 1); // Se imprime el caracter
            i++; // Se avanza al siguiente caracter
        }
    }
    write(1, "\n", 1); // Se imprime una nueva línea
    return (0);
}