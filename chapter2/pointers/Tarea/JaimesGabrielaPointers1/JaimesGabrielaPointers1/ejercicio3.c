#include<stdio.h>

void swap(int *a, int *b)
{
    if (*a > *b)
    {
        int x = *a;
        *a = *b;
        *b = x;
    }else
    {
        *a = *b;
    }
}
int main (void)
{
    int a = 8;
    int b = 10;
    printf("%d %d\n", a, b);
    swap(&a,&b);
    printf("%d %d\n", a, b);
}

//Escriba una función que reciba 2 números e intercambie sus valores sólo en el caso en el que
//el primero sea mayor que el segundo. En caso contrario hacer que ambos tomen el valor del primero.
//Complete el programa escribiendo dentro de main el código necesario para verificar que su función trabaje correctamente.