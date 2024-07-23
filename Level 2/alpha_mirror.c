/* Escribe un programa que tome un string y lo muestre después de reemplazar cada carácter alfabético
por su carácter alfabético "reflejo" "opuesto". La 'a' será la 'z', la 'b' será la 'y', etc.
Si el número de argumentos no es 1, muestra solo una nueva línea*/ 

#include <unistd.h>

int main(int argc, char **argv) 
{
    int i; 

    i = 0;
    if (argc == 2) // Si el número de argumentos es 2
    {
        while (argv[1][i]) // Mientras argv[1][i] no sea nulo
        {
            if (argv[1][i] >= 65 && argv[1][i] <= 90) // Si el caracter es mayúscula
                argv[1][i] = 90 - argv[1][i] + 65; // Se le resta el valor de la letra a 90 y se le suma 65
            else if (argv[1][i] >= 97 && argv[1][i] <= 122) // Si el caracter es minúscula
                argv[1][i] = 122 - argv[1][i] + 97; // Se le resta el valor de la letra a 122 y se le suma 97
            write(1, &argv[1][i], 1); // Se imprime el caracter
            i++; // Se incrementa i
        }
    }
    write(1, "\n", 1); // Se imprime una nueva línea
    return (0); // Se retorna 0
}