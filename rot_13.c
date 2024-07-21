/* Escribe un programa que tome un string y lo muestre, reemplazando cada una de sus letras por una letra
13 espacios mas adelante en orden alfabético. 'z' se convierte en 'm'.
La salida irá seguida de una nueva línea. 
Si el número de argumentos no es 1, el programa muestra una nueva línea.*/
#include <unistd.h>

int main (int argc, char **argv)
{
    int i; // Variable para recorrer el string 

    i = 0;
    if (argc == 2) // Si el número de argumentos es 1
    {
        while (argv[1][i])
        {
          if (argv[1][i] >= 'a' && argv[1][i] <= 'z') // Si el caracter es una letra minúscula
            argv[1][i] = ((argv[1][i] - 'a' + 13) % 26) + 'a'; // Se reemplaza por la letra 13 espacios más adelante
          else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z') // Si el caracter es una letra mayúscula
            argv[1][i] = ((argv[1][i] - 'A' + 13) % 26) + 'A'; // Se reemplaza por la letra 13 espacios más adelante
        write(1, &argv[1][i], 1); // Se imprime el caracter
        i++; // Se avanza al siguiente caracter
        }
    }
    write(1, "\n", 1); // Se imprime una nueva línea
    return (0);
}