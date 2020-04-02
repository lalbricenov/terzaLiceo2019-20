#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

void swap(int *x, int *y)
{
    if(*x>=*y)
    {
    int c = *x;
    *x = *y;
    *y = c;
    }
    else
    {
       *y = *x;
    }
     printf("%p %p\n", y, x);
}

int main(void)
{
    int x = get_int("Numero: ");
    int y = get_int("Numero: ");
    printf("%d %d\n", x, y);
    swap(&x, &y);
    printf("%d %d\n", x, y);
}