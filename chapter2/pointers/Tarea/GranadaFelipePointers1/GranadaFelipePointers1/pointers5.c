#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main(void)
{
    int *x;
    double *y;
    x = malloc(sizeof(int));
    y = malloc(sizeof(double));
    *x = 42;
    *y = 3.14;
    printf("%d\t %f\n", *x, *y);
}