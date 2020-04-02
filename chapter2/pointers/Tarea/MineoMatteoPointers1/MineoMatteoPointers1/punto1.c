#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main(void)
{
    int c = 2;
    int a = 4;
    int b = 8;

    int *x = &c;
    int *y = &a;
    int *z = &b;

    printf("%p %p %p\n", x, y, z);

}