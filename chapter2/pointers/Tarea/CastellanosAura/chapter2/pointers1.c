#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int *x;
    int *y;
    int *z;

    x= malloc(sizeof(int));
   printf("%p\n", x);
   *x= 2;

    y= malloc(sizeof(int));
    printf("%p\n", y);
    *y= 4;

    z= malloc(sizeof(int));
    printf("%p\n", z);
    *z= 8;

}
