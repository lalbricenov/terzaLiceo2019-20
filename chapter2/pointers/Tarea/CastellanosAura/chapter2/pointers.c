#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    // creamos 2 apuntadores
    int *x;
    int *y;

    x = malloc(sizeof(int)); //malloc = memory allocation
    printf ("%p\n", x);
}