#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
int main (void)
{
    int *a;
    double *b;
    a = malloc(sizeof(int));
    b = malloc(sizeof(int));
    *b = 3.14;
    *a = 42;
    printf(" n1:%d\n n2:%f\n", *a, *b);
}