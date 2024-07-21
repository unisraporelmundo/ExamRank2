/*Reproduce el comportamiento de la FUNCIÓN strcpy*/

char    *ft_strcpy (char *s1, char *s2)
{
    int i; 
    i = 0;

    while (s2[i]) // Mientras el string exista //
    {
        s1[i] = s2[1]; // Copia el caracter de la posición actual de s2 en la posición actual de s1 //
        i++; // Incrementa la variable en 1 //
    }
    s1[i] = '\0'; // Agrega el caracter nulo al final del string //
    return (s1);  // Devuelve el string copiado //
}