#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //int num1 = 2;
    int *x;
    int *y;
    int *z;
    //x =  &num1;
    x = malloc(sizeof(int));
    printf("%p\n", x);
    *x = 2;
    printf("%d\n", *x);
    y = malloc(sizeof(int));
    printf("%p\n", y);
    *y = 4;
    printf("%d\n", *y);
    z = malloc(sizeof(int));
    printf("%p\n", z);
    *z = 8;
    printf("%d\n", *z);
}