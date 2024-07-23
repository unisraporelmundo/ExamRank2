/*Escribe UN PROGRAMA que tome tres argumentos de la línea de comandos:
El primer argumento es un número entero (con signo).
El segundo argumento es un operador aritmético (+, -, *, /, %).
El tercer argumento es otro número entero (con signo).
El programa realiza la operación aritmética especificada por el segundo argumento 
sobre los dos números y muestra el resultado. Si no se proporcionan exactamente tres argumentos 
(sin contar el nombre del programa),simplemente muestra una nueva línea.*/

#include <stdio.h> // Para usar printf
#include <stdlib.h> // Para usar la función atoi

int main (int argc, char **argv) // Función principal que recibe los argumentos de la línea de comandos
{
    if (argc == 4) // Si el número de argumentos es 4
    {
        if (argv[2][0] == '+') // Si el segundo argumento es un signo de suma
            printf("%d\n", atoi(argv[1]) + atoi(argv[3])); // Se imprime la suma de los dos primeros argumentos
        if (argv[2][0] == '-') // Si el segundo argumento es un signo de resta
            printf("%d\n", atoi(argv[1]) - atoi(argv[3])); // Se imprime la resta de los dos primeros argumentos
        if (argv[2][0] == '*') // Si el segundo argumento es un signo de multiplicación
            printf("%d\n", atoi(argv[1]) * atoi(argv[3])); // Se imprime la multiplicación de los dos primeros argumentos
        if (argv[2][0] == '/')  // Si el segundo argumento es un signo de división
            printf("%d\n", atoi(argv[1]) / atoi(argv[3])); // Se imprime la división de los dos primeros argumentos
        if (argv[2][0] == '%') // Si el segundo argumento es un signo de módulo
            printf("%d\n", atoi(argv[1]) % atoi(argv[3])); // Se imprime el módulo de los dos primeros argumentos
    }
    printf("\n"); // Se imprime una nueva línea
    return (0); // Se retorna 0
}