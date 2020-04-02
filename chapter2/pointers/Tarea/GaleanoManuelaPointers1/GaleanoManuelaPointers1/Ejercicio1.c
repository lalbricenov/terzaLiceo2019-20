#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

//recibe tres valores y sus apuntadores
int main(void)
{
    int *x;
    int *y;
    int *z;

    x = malloc(sizeof(int));
    y = malloc(sizeof(int));
    z = malloc(sizeof(int));

    printf("%p\n",x);
    *x = 2;
    *y = 4;
    *z = 8;

     printf (" %d\n %d\n %d\n", *x , *y, *z);
}