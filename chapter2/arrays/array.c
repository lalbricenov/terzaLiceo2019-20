#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
// Programa que crea un array usando apuntadores
int main(void)
{
    int n = 3;// tamaño del array
    float *notas = malloc( n * sizeof(float));//reservo el espacio de memoria para 3 floats
    // printf("%p\n", notas);
    *(notas + 0) = 7.4;
    *(notas + 1) = 4.5;
    notas[2] = 8.3;

    for (int i = 0;  i < n; i++)
    {
        printf("%f\t", *(notas+i) );
        //printf("%f\t", notas[i] );
    }
}