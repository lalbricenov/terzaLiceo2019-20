#include <stdio.h>

int main(void)
{
    int a = 2;
    int b = 4;
    int c = 8;
    int *x;
    int *y;
    int *z;
    x = &a;
    y = &b;
    z = &c;
    printf("%p, %p, %p", x, y, z);
}
