#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Creo 2 apuntadores
    int *x;
    int *y;

    x = malloc(sizeof(int)); // malloc= memory allocation
    printf("%p\n", x);
    *x = 42;
    printf("%d\n", *x);
    //printf("%p %p\n", x, y);
}