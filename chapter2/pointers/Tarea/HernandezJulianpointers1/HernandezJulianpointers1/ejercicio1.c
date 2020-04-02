#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int x=2;
    int y=4;
    int z=8;
    int*xPtr = &x;
    int*yPtr =&y ;
    int*zPtr=&z ;
printf("%p %p %p ",xPtr,yPtr,zPtr);
}