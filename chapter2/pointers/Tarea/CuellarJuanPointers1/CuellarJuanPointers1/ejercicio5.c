#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int *xPtr = malloc (sizeof(int));
    double *yPtr = malloc(sizeof(double));

    int x = 42;
    double y = 3.14;



    printf (" %d %.2f\n", x, y);
}