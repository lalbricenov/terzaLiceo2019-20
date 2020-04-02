#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //char *v;
    //int *w;
    //long *x;
    //float *y;
    //double *z;

   //v = malloc(sizeof(char));
    //w = malloc (sizeof(int));
    //x = malloc (sizeof(long));
    //y = malloc (sizeof(float));
    //z = malloc (sizeof(double));
    //printf (" %p\n", v, w, x, y, z);

    printf("El tamaño de memoria que ocupa char es: %lu\n", sizeof(char));
    printf("El tamaño de memoria que ocupa int es: %lu\n", sizeof(int));
    printf ("El tamaño de memoria que ocupa long es: %lu\n", sizeof(long));
    printf("El tamaño de memoria que ocupa float es: %lu\n", sizeof(float));
    printf("El tamaño de memoria que ocupa double es: %lu", sizeof(double));
    return 0;

}