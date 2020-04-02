//Escriba un programa en el que cree 2 apuntadores, uno de tipo entero y otro de tipo double. A continuación reserve memoria con malloc para cada uno. Luego guarde en la posición de memoria a la que apunta el primero el número 42 y en la posición de memoria a la que apunta el segundo el número 3.14. Por último imprima los dos números almacenados.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x;
    double *y;
    x = malloc(sizeof(int));
    y= malloc(sizeof(double));
    *x = 42;
    *y = 3.14;
    printf("%d y %f", *x, *y);
}