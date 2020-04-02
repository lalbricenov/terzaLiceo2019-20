#include<stdio.h>

void swap(int *a, int *b)
{
    int x = *a;
    *a = *b;
    *b = x;
}
int main (void)
{
    int a = 8;
    int b = 3;
    printf("%d %d\n", a, b);
    swap(&a,&b);
    printf("%d %d\n", a, b);
}



//Escriba una función que intercambie 2 números, es decir que en la posición de memoria del
//primero quede guardado el valor que tenía antes el segundo y viceversa.
//Complete el programa escribiendo dentro de main el código necesario para verificar que su función opere correctamente.