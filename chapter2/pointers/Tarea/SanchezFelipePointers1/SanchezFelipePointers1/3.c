//Escriba una función que reciba 2 números e intercambie sus valores sólo en el caso en el que el primero sea mayor que el segundo. En caso contrario hacer que ambos tomen el valor del primero. Complete el programa escribiendo dentro de main el código necesario para verificar que su función trabaje correctamente.
#include <stdio.h>
#include <cs50.h>

void intercambio(int *x, int *y)
{
    if(*x > *y)
    {
    int c = *x;
    *x= *y;
    *y= c;
    }
    else
    {
        *y = *x;
    }
}

int main (void)
{
    int x= get_int("Ingrese el primer número: ");
    int y= get_int("Ingrese el segundo número: ");
    printf("El primer número fue: %d y el segundo: %d\n", x, y);

     intercambio(&x,&y);
     printf("Depues del intercambio el primer número quedo: %d y el segundo: %d\n", x, y);


}