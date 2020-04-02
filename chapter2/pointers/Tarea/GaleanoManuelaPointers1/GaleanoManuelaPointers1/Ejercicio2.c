#include <stdio.h>
#include <cs50.h>
#include <stdlib.h> //para incluir el malloc



void swap  ( int *x , int *y)
    {
     int c = *x;
     *x = *y;
     *y = c;
    }


int main(void)
{

   int  x = 5 ;
   int  y = 15 ;

    printf("%d %d\n", x,y);
    swap(&x,&y);
    printf("%d %d\n",  x , y);
}