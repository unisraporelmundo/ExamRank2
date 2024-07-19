include <unistd.h>

int main (int argc, char **argv) // Recibe dos parametros, el número de argumentos, y un array de argumentos //
{
    int i;

    i = 0;
    if ( argc == 2) // Verifica el número de argumentos. "Si el número de argumentos es igual a 2"
    {
        while (argv[1][i] == 32 || argv[1][i] == 9) // Mientras el caracter actual no sea un espacio o un tabulador, avanza al siguiente caracter del string //
        i++;
        while ((argv[1][i] != 32 && argv[1][i] != 9) && argv[1][i]) // Mientras el caracter actual no sea un espacio ni un tabulador y el string existe //
        {
            write (1, &argv[i],1); // Escribe en la salida estándar, el caracter en la posición actual que ocupa un byte //
            i++;
        }
        write (1, "\n", 1); // Escribe un salto de línea en la salida estándar //
    }
}
