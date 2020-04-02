#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>

    void intercambiar2(int *xP,int *yP,int *zP)
    {
        if (*xP>*yP)
        {
            *xP=*yP;
            *yP=*zP;

        }
        else
        {
            *xP=*yP;
        }
    }
    int main(void)
    {
        int x= get_int("Ingrese une entero");
        int y= get_int("Ingrese otro entero ");
        int z=x;
        printf("%d,%d\n",x,y);
        intercambiar2(&x,&y,&z);
        printf("%d,%d",x,y);

    }

