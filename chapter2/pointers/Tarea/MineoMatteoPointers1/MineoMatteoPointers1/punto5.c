#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int* x = malloc(sizeof(int));
    double* y = malloc(  sizeof(double));

    *x = 42;
    *y = 3.14;
    printf("%d %f\n", *x , *y);

}