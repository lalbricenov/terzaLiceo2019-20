#include <stdio.h>
#include <stdlib.h>

int main(void)
{

     int x = 2;
     int y = 4;
     int z = 8;

     int *xPtr = &x;
     int *YPtr = &y;
     int *zPtr = &z;

     printf(" %d\n %d\n %d\n", *xPtr, *YPtr, *zPtr);


}