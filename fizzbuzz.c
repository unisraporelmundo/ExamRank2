/*Escribe un programa que imprima los números del 1 al 100 cada uno separado por una nueva línea. 
Si el número es múltiplo de 3, en su lugar imprime 'fizz'.
Si el número es múltiplo de 5, en su lugar imprime 'buzz'.
Si el número es múltiplo de 3 y de 5, en su lugar imprime 'fizzbuzz'*/

#include "unistd.h" // Librería que contiene las funciones write y read //

void    write_number (int number) // Función que recibe un número entero y lo imprime en la salida estándar //
{
    char str[10] = "0123456789"; // Array de caracteres que contiene los números del 0 al 9 //
    if (number > 9) // Si el número es mayor a 9 //
        write_number(number / 10); // Llama a la función con el número dividido entre 10 //
    write (1, &str[number % 10], 1); // Escribe en la salida estándar el número en la posición actual que ocupa un byte //
}

int main() // Función principal //
{
    int i; // Variable entera //
    i = 1; // Inicializa la variable en 1 //
    while (i <= 100) // Mientras el número sea menor o igual a 100 //
    {
        if (i % 15 == 0)
            write (1, "fizzbuzz", 8); // Si el número es múltiplo de 3 y de 5, imprime "fizzbuzz" //
        else if (i % 3 == 0)
            write (1, "fizz", 4); // Si el número es múltiplo de 3, imprime "fizz" //
        else if (i % 5 == 0)
            write (1, "buzz", 4); // Si el número es múltiplo de 5, imprime "buzz" //
        else
            write_number(i); // Si no es múltiplo de 3 ni de 5, imprime el número //
        i++; // Incrementa el número en 1 //
        write (1, "\n", 1); // Escribe un salto de línea en la salida estándar //
    }
}