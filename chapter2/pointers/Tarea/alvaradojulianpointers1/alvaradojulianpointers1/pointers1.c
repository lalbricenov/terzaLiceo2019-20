#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int *x;
    int *y;
    int *z;
    x =malloc (sizeof(int));
    y =malloc (sizeof(int));
    z =malloc (sizeof(int));
    printf("%p %p %p\n",x,y,z);
    *x = 2 ;
    *y = 4;
    *z = 8;
    printf("%d %d %d\n",*x,*y,*z);
    //printf("%p\n",x,y);


}