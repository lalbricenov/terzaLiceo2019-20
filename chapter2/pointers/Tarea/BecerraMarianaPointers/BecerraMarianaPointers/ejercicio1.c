
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //creo dos apuntadores
    int a = 2;
    int b = 4;
    int c = 8;

    int *aP = &a;
    int *bP = &b;
    int *cP = &c;


    printf(" %d\n %d\n %d\n", *aP, *bP, *cP);
    //printf("%f % p\n",x, y);
}