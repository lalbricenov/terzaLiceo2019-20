#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main (void)
{
    int *x;
    double *y;
    x = malloc(sizeof(int));
    y = malloc(sizeof(double));
    *x = 42 ;
    *y = 3.14;
    printf ("%d , %f", *x, *y);
}
