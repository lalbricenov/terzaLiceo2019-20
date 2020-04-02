#include <stdio.h>
#include <stdlib.h>

void swap (int *x, int *y)
{
    int c= *x;
    *x= *y;
    *y= c;
}

int main (void)
{
    int x= 4;
    int y= 3;
    printf("%d %d\n", x, y);
    swap(&x, &y);
    printf("%d %d\n", x, y);

    int *xp= &x;
    int *yp= &y;
    printf("%p %p\n", &x, &y);
}
