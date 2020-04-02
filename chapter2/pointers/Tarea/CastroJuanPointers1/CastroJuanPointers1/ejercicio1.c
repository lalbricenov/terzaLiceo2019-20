#include <stdio.h>

int main ()
{
    int x = 2;
    int y = 4;
    int z = 8;

    int *apx = &x;
    int *apy = &y;
    int *apz = &z;

    *apx = 10;
    *apy = 15;
    *apz = 20;

    printf("%d\n", x);
    printf("%d\n",y);
    printf("%d\n", z);
}