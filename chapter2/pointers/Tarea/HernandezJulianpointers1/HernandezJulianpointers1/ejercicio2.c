#include<stdio.h>
#include<stdlib.h>
void intercambiar(int *xP, int *yP, int *zP)
{
    // esta funcion intercambia los valores almacenados en xp y yp
    *xP = *yP;
    *yP =*zP;

}
int main (void)
{
    int x=4;
    int y=5;
    int z=x;
    printf("%d,%d\n",x,y);
    intercambiar(&x,&y,&z);
    printf("%d,%d",x,y);

}