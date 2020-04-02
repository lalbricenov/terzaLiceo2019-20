#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int*a;
    double*b;
    a=malloc(sizeof(int));
    b=malloc(sizeof(double));
    *a=42;
    *b=3.14;
    printf("%d; %f",*a,*b);


}