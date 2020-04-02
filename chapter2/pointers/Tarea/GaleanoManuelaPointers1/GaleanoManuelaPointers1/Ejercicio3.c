#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
//cambia la posición de memoria de dos valores en dado caso que el primero sea mayor al segundo
void swap  ( int *x , int *y)
    {
        if (*x > *y)
        {
            int c = *x;
            *x = *y;
            *y = c;
        }else {
            *y = *x;
        }

    }


int main(void)
{

   int  x = 50 ;
   int  y = 15 ;

    printf("%d %d\n", x,y);

    swap(&x,&y);
    printf("%d %d\n",  x , y);
}

