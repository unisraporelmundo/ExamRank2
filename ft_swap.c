/* Escribe una función que intercambie el contenido de dos números enteros cuyas direcciones
se pasan como parámetros*/

void    ft_swap(int *a, int *b) // Función que recibe dos punteros a enteros //
{
    int c; // Variable entera //
    c = *a; // Guarda el valor de la variable a en c //
    *a = *b; // Guarda el valor de la variable b en a //
    *b = c; // Guarda el valor de c en b //
}