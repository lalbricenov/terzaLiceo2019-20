#include <stdio.h>

int main(void)
{
    int x=2;
    int y=4;
    int z=8;

    int *x1= &x;
    int *y1= &y;
    int *z1= &z;

    *x1 = 4;
    *y1 = 8;
    *z1 = 16;
    printf("%d %d %d\n", x, y, z);
}