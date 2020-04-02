// Escriba una función que intercambie 2 números, es decir que en la posición de memoria del primero quede guardado el valor que tenía antes el segundo y viceversa. Complete el programa escribiendo dentro de main el código necesario para verificar que su función opere correctamente.
#include <stdio.h>
#include <cs50.h>

void intercambio(int *x, int *y)
{
    int c = *x;
    *x= *y;
    *y= c;
}
int main (void)
{
    int x= get_int("Ingrese el primer número: ");
    int y= get_int("Ingrese el segundo número: ");
    printf("el primer número fue: %d y el segundo: %d\n", x, y);
    intercambio(&x,&y);
    printf(" depues del intercambio el primer número quedo: %d y el segundo: %d\n", x, y);
}